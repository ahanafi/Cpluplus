using namespace std;

class Payment
{
    public :
        int payment_user, return_payment, total_payments;
        void paymentBuy(int total, int payment_user)
        {
            total_payments = total;
            return_payment = payment_user - total_payments;
            cout<<"\n";
            if(return_payment == 0)
            {
                cout<<"Tidak ada kembalian :)";
            } else if(return_payment > 0)
            {
                cout<<"Kembalian Anda sebesar Rp."<<return_payment;
            } else {
                cout<<"Uang Anda kurang sebesar Rp."<<return_payment;
            }

            cout<<"\n";
            cout<<"Terima kasih telah berbelanja :) \n"<<endl;
        }
};
