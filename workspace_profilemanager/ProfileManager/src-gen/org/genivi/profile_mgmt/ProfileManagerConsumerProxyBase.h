/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.2.201309301424.
* Used org.franca.core 0.8.10.201309262002.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef ORG_GENIVI_PROFILE_MGMT_Profile_Manager_Consumer_PROXY_BASE_H_
#define ORG_GENIVI_PROFILE_MGMT_Profile_Manager_Consumer_PROXY_BASE_H_

#include "ProfileManagerConsumer.h"



#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif


#include <CommonAPI/Proxy.h>
#include <functional>
#include <future>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace profile_mgmt {

class ProfileManagerConsumerProxyBase: virtual public CommonAPI::Proxy {
 public:

    typedef std::function<void(const CommonAPI::CallStatus&)> DetectedUserAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&)> SynchronizedUserAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&)> StopAsyncCallback;



    virtual void detectedUser(const int32_t& seatID, const int32_t& userID, const uint64_t& sessionID, CommonAPI::CallStatus& callStatus) = 0;
    virtual std::future<CommonAPI::CallStatus> detectedUserAsync(const int32_t& seatID, const int32_t& userID, const uint64_t& sessionID, DetectedUserAsyncCallback callback) = 0;
    virtual void synchronizedUser(const int32_t& seatID, const int32_t& userID, const uint64_t& sessionID, CommonAPI::CallStatus& callStatus) = 0;
    virtual std::future<CommonAPI::CallStatus> synchronizedUserAsync(const int32_t& seatID, const int32_t& userID, const uint64_t& sessionID, SynchronizedUserAsyncCallback callback) = 0;
    virtual void stop(const int32_t& seatID, const uint64_t& sessionID, CommonAPI::CallStatus& callStatus) = 0;
    virtual std::future<CommonAPI::CallStatus> stopAsync(const int32_t& seatID, const uint64_t& sessionID, StopAsyncCallback callback) = 0;
};

} // namespace profile_mgmt
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_PROFILE_MGMT_Profile_Manager_Consumer_PROXY_BASE_H_