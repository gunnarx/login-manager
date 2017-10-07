/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.4.201311151436.
* Used org.franca.core 0.8.11.201401091023.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef ORG_GENIVI_PROFILE_MGMT_CTRL_Profile_Manager_Ctrl_PROXY_BASE_H_
#define ORG_GENIVI_PROFILE_MGMT_CTRL_Profile_Manager_Ctrl_PROXY_BASE_H_

#include "ProfileManagerCtrl.h"



#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/InputStream.h>
#include <CommonAPI/OutputStream.h>
#include <cstdint>
#include <vector>

#include <CommonAPI/Event.h>
#include <CommonAPI/SelectiveEvent.h>
#include <CommonAPI/Proxy.h>
#include <functional>
#include <future>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace profile_mgmt_ctrl {

class ProfileManagerCtrlProxyBase: virtual public CommonAPI::Proxy {
 public:
    typedef CommonAPI::SelectiveEvent<std::string, uint32_t, uint32_t, ProfileManagerCtrl::ESignal, uint64_t, int32_t, uint64_t> OnTimeOutSelectiveEvent;
    typedef CommonAPI::SelectiveEvent<uint32_t, uint32_t, int32_t, ProfileManagerCtrl::ESignal, uint64_t> OnStateChangeStartSelectiveEvent;
    typedef CommonAPI::SelectiveEvent<uint32_t, uint32_t, int32_t, ProfileManagerCtrl::ESignal, uint64_t> OnStateChangeStopSelectiveEvent;
    typedef CommonAPI::SelectiveEvent<std::string, uint32_t> OnClientRegisterSelectiveEvent;
    typedef CommonAPI::SelectiveEvent<std::string, uint32_t> OnClientUnregisterSelectiveEvent;

    typedef std::function<void(const CommonAPI::CallStatus&)> RegisterMeAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&)> SetUserAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&)> UnsetUserAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&)> TimeOutActionAsyncCallback;


    virtual OnTimeOutSelectiveEvent& getOnTimeOutSelectiveEvent() = 0;
    virtual OnStateChangeStartSelectiveEvent& getOnStateChangeStartSelectiveEvent() = 0;
    virtual OnStateChangeStopSelectiveEvent& getOnStateChangeStopSelectiveEvent() = 0;
    virtual OnClientRegisterSelectiveEvent& getOnClientRegisterSelectiveEvent() = 0;
    virtual OnClientUnregisterSelectiveEvent& getOnClientUnregisterSelectiveEvent() = 0;

    virtual void registerMe(const bool& registerOnTimeOut, const bool& registerOnStateChangeStart, const bool& registerOnStateChangeStop, const bool& registerOnClientRegister, const bool& registerOnClientUnregister, CommonAPI::CallStatus& callStatus) = 0;
    virtual std::future<CommonAPI::CallStatus> registerMeAsync(const bool& registerOnTimeOut, const bool& registerOnStateChangeStart, const bool& registerOnStateChangeStop, const bool& registerOnClientRegister, const bool& registerOnClientUnregister, RegisterMeAsyncCallback callback) = 0;
    virtual void setUser(const uint32_t& userId, const uint32_t& seatId, CommonAPI::CallStatus& callStatus) = 0;
    virtual std::future<CommonAPI::CallStatus> setUserAsync(const uint32_t& userId, const uint32_t& seatId, SetUserAsyncCallback callback) = 0;
    virtual void unsetUser(const uint32_t& seatId, CommonAPI::CallStatus& callStatus) = 0;
    virtual std::future<CommonAPI::CallStatus> unsetUserAsync(const uint32_t& seatId, UnsetUserAsyncCallback callback) = 0;
    virtual void timeOutAction(const uint64_t& timeOutSessionId, const ProfileManagerCtrl::ETimeOutAction& timeOutActionItem, CommonAPI::CallStatus& callStatus) = 0;
    virtual std::future<CommonAPI::CallStatus> timeOutActionAsync(const uint64_t& timeOutSessionId, const ProfileManagerCtrl::ETimeOutAction& timeOutActionItem, TimeOutActionAsyncCallback callback) = 0;
};

} // namespace profile_mgmt_ctrl
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_PROFILE_MGMT_CTRL_Profile_Manager_Ctrl_PROXY_BASE_H_