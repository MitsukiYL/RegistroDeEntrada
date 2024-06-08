#include "user.h"

using namespace System;

namespace RDEModel {
    public ref class request {
    private:

        int ID;
        String^ emissionDate;
        String^ responseDate;
        String^ type;
        String^ newOccupation;
        String^ comment;
        bool active;
        bool accepted;
        user^ objUser;


    public:

        request();
        request(int ID, String^ emissionDate, String^ responseDate, String^ type, String^ newOccupation, String^ comment, bool active, bool accepted, user^ objUser);

        int getID();
        void setID(int ID);

        String^ getEmissionDate();
        void setEmissionDate(String^ emissionDate);

        String^ getResponseDate();
        void setResponseDate(String^ responseDate);

        String^ getType();
        void setType(String^ type);

        String^ getNewOccupation();
        void setNewOccupation(String^ newOccupation);

        String^ getComment();
        void setComment(String^ comment);

        bool getActive();
        void setActive(bool active);

        bool getAccepted();
        void setAccepted(bool accepted);

        user^ getUser();
        void setUser(user^ objUser);
    };
}