using namespace std;

class Data{
	public:
		int list_price_per_class[3] = {400000, 300000, 250000};
		int list_price_of_laundry[3] = {50000, 30000, 20000};
		int list_price_of_spa[3] = {70000, 50000, 30000};
		int list_price_of_fitness[3] = {200000, 150000, 100000};

		string list_code_facilites[7] = {"LSF", "LF", "LS", "SF", "L", "S", "F"};
		string list_facilities[7] = {
			"Laundry, SPA, Fitness \t \t",
			"Laundry, Fitness \t \t\t",
			"Laundry, SPA \t\t\t\t",
			"SPA, Fitness \t\t\t\t",
			"Laundry \t\t\t\t",
			"SPA \t\t\t\t\t",
			"Fitness \t\t\t\t"
		};

		void showTablePrice(){

			_2nd_line();

			cout<<"|         |              | \t \t Harga Fasilitas \t |\n";
			cout<<"|  Kelas  | Harga Kamar  |=======================================|\n";
			cout<<"|         | /hari        | Laundry \t | SPA \t   | Fitness \t |\n";

			_2nd_line();

			for(int i=0; i<3; i++){
                cout<<"|    "<<i+1<<"    | "<<list_price_per_class[i]<<" \t | "<<list_price_of_laundry[i]<<" \t | "<<list_price_of_spa[i]<<"   | "<<list_price_of_fitness[i]<<" \t |\n";
			}

			_2nd_line();
	}

		void showTableFacilities(){
			_2nd_line();
			cout<<"| Kode Fasilitas| Fasilitas yang digunakan \t\t\t | \n";
			_2nd_line();
			for(int i=0; i<7; i++){
				cout<<"| "<<list_code_facilites[i]<<"  		| "<<list_facilities[i]<<" \t | \n";
			}
			_2nd_line();
			cout<<endl;

		}

	private:
		void _2nd_line(){
			cout<<"================================================================== \n";
		}
};

/*
	Copyright 2017 by Ahmad Hanafi | 2017102020 | Teknik Informatika | STMIK CIC
*/
