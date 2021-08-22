#pragma once
#include "Core.h"
#include "IObserver.h"
#include "CoreSession.h"

class CORE_API Observer : public IObserver 
{
   
    public:

        Observer(CoreSession& coreSesssion, EventTypes eventType) ;
        virtual ~Observer();
        void Update(const std::string& message_from_subject) override;
        void RemoveMeFromTheList();
        void PrintInfo();
        bool UpdateOnEventType(EventTypes eventType);

    private:
        std::string message_from_subject_;
        CoreSession& coreSession_;
        static int static_number_;
        int number_;
        EventTypes m_eventType;
    
};

