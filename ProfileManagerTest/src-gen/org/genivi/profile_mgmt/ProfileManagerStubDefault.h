/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.4.201311151436.
* Used org.franca.core 0.8.11.201401091023.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef ORG_GENIVI_PROFILE_MGMT_Profile_Manager_STUB_DEFAULT_H_
#define ORG_GENIVI_PROFILE_MGMT_Profile_Manager_STUB_DEFAULT_H_

#include <org/genivi/profile_mgmt/ProfileManagerStub.h>
#include <sstream>

namespace org {
namespace genivi {
namespace profile_mgmt {

/**
 * Provides a default implementation for ProfileManagerStubRemoteEvent and
 * ProfileManagerStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class ProfileManagerStubDefault : public ProfileManagerStub {
 public:
    ProfileManagerStubDefault();

    ProfileManagerStubRemoteEvent* initStubAdapter(const std::shared_ptr<ProfileManagerStubAdapter>& stubAdapter);


    virtual void registerMe(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string appID, int32_t seatID);
    virtual void registerMe(std::string appID, int32_t seatID);

    virtual void unregisterMe(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string consumerAddress, std::string appID, int32_t seatID);
    virtual void unregisterMe(std::string consumerAddress, std::string appID, int32_t seatID);

    virtual void confirm(const std::shared_ptr<CommonAPI::ClientId> clientId, uint64_t sessionID);
    virtual void confirm(uint64_t sessionID);

    virtual void stopped(const std::shared_ptr<CommonAPI::ClientId> clientId, uint64_t sessionID);
    virtual void stopped(uint64_t sessionID);


    virtual void fireDetectedUserSelective(const int32_t& seatID, const int32_t& userID, const uint64_t& sessionID, const std::shared_ptr<CommonAPI::ClientIdList> receivers = NULL);
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForDetectedUserSelective();
    /// Hook method for reacting on new subscriptions or removed subscriptions respectively for selective broadcasts.
    virtual void onDetectedUserSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> clientId, const CommonAPI::SelectiveBroadcastSubscriptionEvent event);
    /// Hook method for reacting accepting or denying new subscriptions 
    virtual bool onDetectedUserSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> clientId);
    virtual void fireSynchronizedUserSelective(const int32_t& seatID, const int32_t& userID, const uint64_t& sessionID, const std::shared_ptr<CommonAPI::ClientIdList> receivers = NULL);
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForSynchronizedUserSelective();
    /// Hook method for reacting on new subscriptions or removed subscriptions respectively for selective broadcasts.
    virtual void onSynchronizedUserSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> clientId, const CommonAPI::SelectiveBroadcastSubscriptionEvent event);
    /// Hook method for reacting accepting or denying new subscriptions 
    virtual bool onSynchronizedUserSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> clientId);
    virtual void fireStopSelective(const int32_t& seatID, const uint64_t& sessionID, const std::shared_ptr<CommonAPI::ClientIdList> receivers = NULL);
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForStopSelective();
    /// Hook method for reacting on new subscriptions or removed subscriptions respectively for selective broadcasts.
    virtual void onStopSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> clientId, const CommonAPI::SelectiveBroadcastSubscriptionEvent event);
    /// Hook method for reacting accepting or denying new subscriptions 
    virtual bool onStopSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> clientId);
    

 protected:
    std::shared_ptr<ProfileManagerStubAdapter> stubAdapter_;
 private:
    class RemoteEventHandler: public ProfileManagerStubRemoteEvent {
     public:
        RemoteEventHandler(ProfileManagerStubDefault* defaultStub);


     private:
        ProfileManagerStubDefault* defaultStub_;
    };

    RemoteEventHandler remoteEventHandler_;

};

} // namespace profile_mgmt
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_PROFILE_MGMT_Profile_Manager_STUB_DEFAULT_H_
