/**
 * Project Untitled
 */
#include "card.h"

#ifndef _SENSOR_H
#define _SENSOR_H

using namespace System;
using namespace System::Collections::Generic;

namespace RDEModel {
	public ref class sensor {
    private:
        int pin;
        String^ protocole;
        String^ producer;
        bool active;
        int registrationDate;
        int ID;
        String^ model;
        List<card^>^ listCard;

    public:
        sensor();
        sensor(int pin, String^ protocole, String^ producer, bool active, int registrationDate, int ID, String^ model, List<card^>^ listCard);

        int getPin();
        void setPin(int pin);

        String^ getProtocole();
        void setProtocole(String^ protocole);

        String^ getProducer();
        void setProducer(String^ producer);

        bool getActive();
        void setActive(bool active);

        int getRegistrationDate();
        void setRegistrationDate(int registrationDate);

        int getID();
        void setID(int ID);

        String^ getModel();
        void setModel(String^ model);

        List<card^>^ getListCard();
        void setListCard(List<card^>^ listCard);
    };
}

#endif //_SENSOR_H