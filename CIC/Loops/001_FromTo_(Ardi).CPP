/*
   Nama 				: Ardi Firmansyah
   Kelas				: TI 1/2
   NIM            : 2017102085
   Tanggal			: 25 - 06 - 2018
   Deskripsi		: mencetak hai
*/

void NumberFromTo()
{
  int a;
  int akhir;

	printf("masukkan bilangan awal : ");scanf("%d", &a);
	printf("masukkan bilangan akhir : ");scanf("%d", &akhir);
	for (a  ; a <= akhir; a++)  {
		printf("\n %d", a);
	}
}
