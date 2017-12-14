using namespace std;

class User
{
    public :
        char nama[100];
        char enter[1];
        void account()
        {
            cout<<"Masukkan Nama Anda disini \n[Gunakan UNDERSCORE untuk pengganti SPASI] : ";
            cin>>nama;
            cout<<"\n";
            cout<<"Hi "<<strupr(nama)<<"!, Silahkan berbelanja! :)";
            cout<<"\n"<<endl;
        }

};
