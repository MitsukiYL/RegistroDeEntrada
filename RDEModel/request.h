#include "user.h"

using namespace System;

namespace RDEModel {
    public ref class request {
    private:

        int ID;
        int emissionDate;
        int responseDate;
        String^ type;
        String^ newOccupation;
        String^ comment;
        bool active;
        user^ objUser;


    public:

        request();
        request(int ID, int emissionDate, int responseDate, String^ type, String^ newOccupation, String^ comment, bool active, user^ objUser);

        int getID();
        void setID(int ID);

        int getEmissionDate();
        void setEmissionDate(int emissionDate);

        int getResponseDate();
        void setResponseDate(int responseDate);

        String^ getType();
        void setType(String^ type);

        String^ getNewOccupation();
        void setNewOccupation(String^ newOccupation);

        String^ getComment();
        void setComment(String^ comment);

        bool getActive();
        void setActive(bool active);

        user^ getUser();
        void setUser(user^ objUser);
    };
}