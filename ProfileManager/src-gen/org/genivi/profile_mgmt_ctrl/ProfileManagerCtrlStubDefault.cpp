/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.4.201311151436.
* Used org.franca.core 0.8.11.201401091023.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <org/genivi/profile_mgmt_ctrl/ProfileManagerCtrlStubDefault.h>

namespace org {
namespace genivi {
namespace profile_mgmt_ctrl {

ProfileManagerCtrlStubDefault::ProfileManagerCtrlStubDefault():
        remoteEventHandler_(this) {
}

ProfileManagerCtrlStubRemoteEvent* ProfileManagerCtrlStubDefault::initStubAdapter(const std::shared_ptr<ProfileManagerCtrlStubAdapter>& stubAdapter) {
    stubAdapter_ = stubAdapter;
    return &remoteEventHandler_;
}


void ProfileManagerCtrlStubDefault::registerMe(const std::shared_ptr<CommonAPI::ClientId> clientId, bool registerOnTimeOut, bool registerOnStateChangeStart, bool registerOnStateChangeStop, bool registerOnClientRegister, bool registerOnClientUnregister) {
    // Call old style methods in default 
    registerMe(registerOnTimeOut, registerOnStateChangeStart, registerOnStateChangeStop, registerOnClientRegister, registerOnClientUnregister);
}
void ProfileManagerCtrlStubDefault::registerMe(bool registerOnTimeOut, bool registerOnStateChangeStart, bool registerOnStateChangeStop, bool registerOnClientRegister, bool registerOnClientUnregister) {
    // No operation in default
}

void ProfileManagerCtrlStubDefault::setUser(const std::shared_ptr<CommonAPI::ClientId> clientId, uint32_t userId, uint32_t seatId) {
    // Call old style methods in default 
    setUser(userId, seatId);
}
void ProfileManagerCtrlStubDefault::setUser(uint32_t userId, uint32_t seatId) {
    // No operation in default
}

void ProfileManagerCtrlStubDefault::unsetUser(const std::shared_ptr<CommonAPI::ClientId> clientId, uint32_t seatId) {
    // Call old style methods in default 
    unsetUser(seatId);
}
void ProfileManagerCtrlStubDefault::unsetUser(uint32_t seatId) {
    // No operation in default
}

void ProfileManagerCtrlStubDefault::timeOutAction(const std::shared_ptr<CommonAPI::ClientId> clientId, uint64_t timeOutSessionId, ProfileManagerCtrl::ETimeOutAction timeOutActionItem) {
    // Call old style methods in default 
    timeOutAction(timeOutSessionId, timeOutActionItem);
}
void ProfileManagerCtrlStubDefault::timeOutAction(uint64_t timeOutSessionId, ProfileManagerCtrl::ETimeOutAction timeOutActionItem) {
    // No operation in default
}


void ProfileManagerCtrlStubDefault::fireOnTimeOutSelective(const std::string& appName, const uint32_t& userId, const uint32_t& seatId, const ProfileManagerCtrl::ESignal& s, const uint64_t& sessionId, const int32_t& timeElapsedMs, const uint64_t& timeOutSessionId, const std::shared_ptr<CommonAPI::ClientIdList> receivers) {
    stubAdapter_->sendOnTimeOutSelective(appName, userId, seatId, s, sessionId, timeElapsedMs, timeOutSessionId, receivers);
}
void ProfileManagerCtrlStubDefault::onOnTimeOutSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> clientId, const CommonAPI::SelectiveBroadcastSubscriptionEvent event) {
    // No operation in default
}
bool ProfileManagerCtrlStubDefault::onOnTimeOutSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    // Accept in default
    return true;
}
std::shared_ptr<CommonAPI::ClientIdList> const ProfileManagerCtrlStubDefault::getSubscribersForOnTimeOutSelective() {
    return(stubAdapter_->getSubscribersForOnTimeOutSelective());
}

void ProfileManagerCtrlStubDefault::fireOnStateChangeStartSelective(const uint32_t& userId, const uint32_t& seatId, const int32_t& depLevel, const ProfileManagerCtrl::ESignal& s, const uint64_t& sessionId, const std::shared_ptr<CommonAPI::ClientIdList> receivers) {
    stubAdapter_->sendOnStateChangeStartSelective(userId, seatId, depLevel, s, sessionId, receivers);
}
void ProfileManagerCtrlStubDefault::onOnStateChangeStartSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> clientId, const CommonAPI::SelectiveBroadcastSubscriptionEvent event) {
    // No operation in default
}
bool ProfileManagerCtrlStubDefault::onOnStateChangeStartSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    // Accept in default
    return true;
}
std::shared_ptr<CommonAPI::ClientIdList> const ProfileManagerCtrlStubDefault::getSubscribersForOnStateChangeStartSelective() {
    return(stubAdapter_->getSubscribersForOnStateChangeStartSelective());
}

void ProfileManagerCtrlStubDefault::fireOnStateChangeStopSelective(const uint32_t& userId, const uint32_t& seatId, const int32_t& depLevel, const ProfileManagerCtrl::ESignal& s, const uint64_t& sessionId, const std::shared_ptr<CommonAPI::ClientIdList> receivers) {
    stubAdapter_->sendOnStateChangeStopSelective(userId, seatId, depLevel, s, sessionId, receivers);
}
void ProfileManagerCtrlStubDefault::onOnStateChangeStopSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> clientId, const CommonAPI::SelectiveBroadcastSubscriptionEvent event) {
    // No operation in default
}
bool ProfileManagerCtrlStubDefault::onOnStateChangeStopSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    // Accept in default
    return true;
}
std::shared_ptr<CommonAPI::ClientIdList> const ProfileManagerCtrlStubDefault::getSubscribersForOnStateChangeStopSelective() {
    return(stubAdapter_->getSubscribersForOnStateChangeStopSelective());
}

void ProfileManagerCtrlStubDefault::fireOnClientRegisterSelective(const std::string& appName, const uint32_t& seatId, const std::shared_ptr<CommonAPI::ClientIdList> receivers) {
    stubAdapter_->sendOnClientRegisterSelective(appName, seatId, receivers);
}
void ProfileManagerCtrlStubDefault::onOnClientRegisterSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> clientId, const CommonAPI::SelectiveBroadcastSubscriptionEvent event) {
    // No operation in default
}
bool ProfileManagerCtrlStubDefault::onOnClientRegisterSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    // Accept in default
    return true;
}
std::shared_ptr<CommonAPI::ClientIdList> const ProfileManagerCtrlStubDefault::getSubscribersForOnClientRegisterSelective() {
    return(stubAdapter_->getSubscribersForOnClientRegisterSelective());
}

void ProfileManagerCtrlStubDefault::fireOnClientUnregisterSelective(const std::string& appName, const uint32_t& seatId, const std::shared_ptr<CommonAPI::ClientIdList> receivers) {
    stubAdapter_->sendOnClientUnregisterSelective(appName, seatId, receivers);
}
void ProfileManagerCtrlStubDefault::onOnClientUnregisterSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> clientId, const CommonAPI::SelectiveBroadcastSubscriptionEvent event) {
    // No operation in default
}
bool ProfileManagerCtrlStubDefault::onOnClientUnregisterSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    // Accept in default
    return true;
}
std::shared_ptr<CommonAPI::ClientIdList> const ProfileManagerCtrlStubDefault::getSubscribersForOnClientUnregisterSelective() {
    return(stubAdapter_->getSubscribersForOnClientUnregisterSelective());
}



ProfileManagerCtrlStubDefault::RemoteEventHandler::RemoteEventHandler(ProfileManagerCtrlStubDefault* defaultStub):
        defaultStub_(defaultStub) {
}

} // namespace profile_mgmt_ctrl
} // namespace genivi
} // namespace org