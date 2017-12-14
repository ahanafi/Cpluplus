using namespace std;

class Replay{
    public:
        char again;
        void showConfirm()
        {
            cout<<"Apakah anda mau mengulanginya lagi ? [Y = Yes, N = No] : ";
            cin>>again;
        }
};
