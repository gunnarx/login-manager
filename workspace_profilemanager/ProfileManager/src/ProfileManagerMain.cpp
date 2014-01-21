/*****************************************************************
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/.
 * Copyright (c) 2012 Harman International Industries, Inc.
 * All rights reserved
 ***************************************************************/

#include "ProfileManagerMain.h"

ProfileManagerMain::ProfileManagerMain()
: mLogic(0) {

	bool success;

	auto log = std::make_shared<Logger>();						//logger is not yet implemented

	std::shared_ptr<CommonAPI::Factory> factory = CommonAPI::Runtime::load()->createFactory();

	ProfileManagerClientIntf* intfClient = new ProfileManagerClientIntf(factory);
	ProfileManagerControllerIntf* intfController = new ProfileManagerControllerIntf(factory);

	mLogic = new ProfileManagerLogic(*log, *intfClient, *intfController);

	event_handler * ProfileManagerEvents = new event_handler(mLogic);

	auto profileManagerStub 	= std::make_shared<ProfileManagerStubImpl>( *mLogic,ProfileManagerEvents);
	auto profileManagerCtrlStub = std::make_shared<ProfileManagerCtrlStubImpl>(*mLogic,ProfileManagerEvents);

	success = factory->getRuntime()->getServicePublisher()->registerService(profileManagerStub, serviceAddress_profileManager_clientStub, factory);
	if(success) std::cout << "!!!stub successfully registered!!!" << std::endl;
	else		std::cout << "!!!stub registration failed!!!" << std::endl;

	success = factory->getRuntime()->getServicePublisher()->registerService(profileManagerCtrlStub, serviceAddress_profileManager_controllerStub, factory);
	if(success) std::cout << "!!!stub successfully registered!!!" << std::endl;
	else		std::cout << "!!!stub registration failed!!!" << std::endl;

	//start event handler
	//runs forever...
	if (success){
		while(true){
			ProfileManagerEvents->run();
			std::this_thread::sleep_for(std::chrono::milliseconds(50));
		}
	}
	else std::cout << "stubs registration failed : closing Profile Manager" << std::endl;
}

ProfileManagerMain::~ProfileManagerMain() {
	//Assume ProfileManageMain, is always used until process end, or power off, no destruction needed!
}