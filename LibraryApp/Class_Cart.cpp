using namespace std;

class Cart{
    public :
        int data_brg[], qty[], harga;
        int byk_brg;
        // Barang A -> 2
        void viewDataBarang()
        {
            byk_brg = (sizeof(data_brg)/sizeof(data_brg[0]));
            byk_brg = byk_brg-1;

            cout<<"Barang yang Anda beli adalah : "<<endl;
            for(int i=0; i<=byk_brg; i++){
                cout<<"Barang ke-"<<i+1<<" adalah Buku : "<<data_brg[i]<<endl;
            }
        }

};
