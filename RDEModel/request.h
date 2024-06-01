#include "user.h"

using namespace System;

namespace RDEModel {
    public ref class request {
    private:

        int ID;
        int date;
        String^ type;
        String^ newOccupation;
        String^ comment;
        user^ objUser;


    public:

        request();
        request(int ID, int date, String^ type, String^ newOccupation,  String^ comment, user^ objUser);

        int getID();
        void setID(int ID);

        int getDate();
        void setDate(int date);

        String^ getType();
        void setType(String^ type);

        String^ getNewOccupation();
        void setNewOccupation(String^ newOccupation);

        String^ getComment();
        void setComment(String^ comment);

        user^ getUser();
        void setUser(user^ objUser);
    };
}