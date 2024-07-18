#include<iostream>
using namespace std;
class Bank_client{
    private:

    int credit_number;
    int cvv;
    string user_name;
    string password;

    public:
    string name;


    void set_credit_card_number(int credit_number){ 
        this->credit_number =  credit_number;
        cout<<"The address of the object alling this function is "<<this<<endl;
    }
    int get_creditcardnumber()
    {
        cout<<"The credit card number is "<<credit_number;
        return credit_number;
    }
    void set_allthestuffatonce(int credit_number, int name, int password){
        this->credit_number=credit_number;
        this->name = name;
        this->password=password;
    }

};

int main(){
Bank_client a,b,c;
a.name="Amrit";
a.set_credit_card_number(78645);
cout<<"The address of this object is "<<&a<<endl;
return 0;
}
