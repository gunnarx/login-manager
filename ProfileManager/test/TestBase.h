/*****************************************************************
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0. If a copy of the MPL was not distributed with this file,
* You can obtain one at http://mozilla.org/MPL/2.0/.
* Copyright (c) 2012 Harman International Industries, Inc.
* All rights reserved
****************************************************************/
#ifndef TESTBASE_H_
#define TESTBASE_H_

#include "EventMessageQ.h"
#include <list>

class EventReceiver;

class TestBase {
private:
   int mTestNo;

protected:
   TestBase(int testNo);

public:
   virtual ~TestBase();
   virtual void prepare(EventReceiver* er) = 0;
   virtual void execute(EventReceiver* er) = 0;
   int getTestNo();
};

#endif /* TESTBASE_H_ */