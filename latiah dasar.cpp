//--------------------------------Post test ddp---------------------------------------
    
//nomor 1 aku terpbsesi dengan rizky	
	float nilai1;
    float nilai2;
    float hasil;
    char op;
    
    cin>>op;
    cin>>nilai1>>nilai2;
    
    if(nilai1>0||nilai2>0){
        if(op=='1'){
            hasil=nilai1+nilai2;
            cout<<hasil;
        }else if(op=='2'){
            hasil=nilai1-nilai2;
            cout<<hasil;
        }else if(op=='3'){
            hasil=nilai1/nilai2;
            cout<<hasil;
        }else if(op=='4'){
            hasil=nilai1*nilai2;
            cout<<hasil;
        }else{
            cout<<"ERROR";
        }
    }else {
        cout<<"NEGATIVE ERROR";
    }

//nomor 2 kode rahasia
      int angka;
  string kode;

  cin >> angka;

  switch (angka) {
    case 1:
      kode= "One";
      break;
    case 2:
      kode= "Two";
      break;
    case 3:
      kode= "Three";
      break;
    case 4:
      kode= "Four";
      break;
    case 5:
      kode= "Five";
      break;
    case 6:
      kode= "Six";
      break;
    case 7:
      kode= "Seven";
      break;
    case 8:
      kode= "Eight";
      break;
    case 9:
      kode= "Nine";
      break;
      case 10:
          kode="Ten";
          break;
    default:
      kode= "Greater than ten";
  }

  cout<<kode<<endl;

// soal 3 tebak ganjil genap
    int nilai;
    
    cin>>nilai;
    
    string hasil = (nilai%2 == 1)? "ODD" : "EVEN" ;
    cout<<hasil;
    
// soal 4 alex
        char a,b,c;
    
    cin>>a;
    
    cin>>b;
    
    cin>>c;
    
    if(a=='Y'||a=='y'){
        
        cout<<"Alex mengambil jalan ke utara\n";
        
    }if(b=='Y'||b=='y'){
        
        cout<<"Alex mengambil jalan ke barat\n";
        
    }if(c=='Y'||c=='y'){
        
        cout<<"Alex mengambil jalan ke selatan\n";
    }
    
    if(a=='n' && b=='n' && c=='n'){
        
        cout<<"Alex tidak menemukan petunjuk yang jelas, dan dia merasa bingung\n";
        
    }else if(a=='N' && b=='N' && c=='N'){
        
    cout<<"Alex tidak menemukan petunjuk yang jelas, dan dia merasa bingung\n";

    }
    
//soal 5 kyla
    int a,m=0;
    cin>>a;
    for(int i = a;i>0;i--){
        int hasil = a % i;
        if(hasil == 0){
            m++;
        }
    }
    if(m==2){
        cout<<"KAMU TIDAK PERLU KAYANG"<<endl;
    }else{
        cout<<"KAMU PERLU KAYANG";
    }
    
//soal 6 statistika
    int N;
    cin>> N;
    
    int num;
    cin>> num;
    
    int max= num;
    int min= num;
    
    for(int i=1;i<N;i++) {
        cin>> num;
        
    if(num > max) {
        max = num;
        }
    if(num < min) {
        min = num;
        }
       
       }
     cout<< max<<" "<< min<<endl;
     
//soal 7 pola
    int a,b;
    cin >> a >> b;
    for(int i = 1; i <= a; i++){
        if(i%b==0){
            cout << "* ";
        } else{
            cout << i << " ";
        }
    }
    
//soal 8 faktorial
    int a;
    cin >> a;
    
    while(a--){
        int b;
        cin >> b;
        
        long fak = 1;
        for(int i = 1; i <= b; i++){
            fak *= i;
        }
        cout << fak << endl;

    }
    
// soal 9 last digit 
    long a;
    cin >> a;
    
    if ( a == 0 ){
        cout<< "1";
    }else if ( a > 0 && a <= 100000000000000){
        cout << "5";
    }
    
//soal 10 segitiga
    int n;
    cin>>n;
    if(n>=1 && n<=100){
    for(int i = 1; i<=n ; i++){
        for(int j = n ; j > i ;j--){
            cout<<" ";
        }
        for (int k = 1; k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
 }
 

//NAMA=SYAHDAM RIZKY FIRDAUS
//NPM=2317051024

//--------------------------------INPUT DAN OUTPUT---------------------------------------

//INPUT DAN OUTPUT
//	string nama;
//	int npm;
	
//	getline(cin,nama);
//	cin>>npm;
	
//	cout<<"nama kamu :" <<nama << endl ;
//	cout<<"npm kamu : "<<npm;

//--------------------------------FLOAT---------------------------------------


// CARA MEMASUKKAN RUMUS DENGAN FLOAT
//	float a,t,l ;
//	cout<<"masukkan a: ";
//	cin>>a;
//	cout<<"masukkan t: ";
//	cin>>t ;
//	l=0.5*a*t ;
//	cout<<"hasilnya: ";
//	cout<<l ;

//-----------------------------------------------------------------------

//LUAS LINGKARAN
//	float r,L ;
//	cout<< "masukkan jari jari lingkaran: "  ;
//	cin>>r;
//	L=22/7*r*r ;
//	cout<<" Hasilnya : ";               
//	cout<<L;

//--------------------------------PERCABANGAN IF ELSE---------------------------------------


	//PERCABANGAN IF ELSE
// if(condition){
	//statements;
// }else{
	//statements
// }

//contoh PERCABANGAN IF ELSE
//	int nilai;
//	cin>>nilai;
//	if(nilai==100){
//		cout<<"nilai sempurna \n";
//	}else{
//		cout<<"nilai tidak sempurna \n";
//	}

//--------------------------------PERCABANGAN IF ELSE IF---------------------------------------

	//PERCABANGAN IF ELSE IF
//	if(condition){
//	}else if(condition){
		//statements;
//	}else if(condition){
		//statements
//	}
	
	//contoh PERCABANGAN IF ELSE IF
//	int nilai;
//	cin>>nilai;
//	if(nilai==100){
//		cout<<"nilai sempurna \n";
//	}else if(nilai>75&&nilai<100){
//		cout<<"nilai diatas kkm";
//	}else if(nilai<75&&nilai>0){
//		cout<<"nilai dibawaha kkm";
//	}

//--------------------------------PERCABANGAN SWITCH-CASE---------------------------------------

	//PERCABANGAN SWITCH-CASE
//	switch(variabel_name){
//		case value1 :
//			//statements
//			break;
//		case value2 :
//			//statements
//			break;
//		case value3 :
//			//statements
//			break
//		default :
			//statements
			
//Contoh PERCABANGAN SWITCH-CASE
//	char huruf ='B' ;
//	switch(huruf){
//		case 'A' :
//			cout<<"nilai anda 100 \n";
//			break;
//		case 'B' :
//			cout<<"nilai anda 78-99 \n";
//			break;
//		case 'C' :
//			cout<<"nilai anda dibawah 78 \n";
//			break;
//		default :
//			cout<<"nilai anda tidak terdaftar";
//			break;

//--------------------------------PERCABANGAN TERNARY OPERATOR---------------------------------------

	//PERCABANGAN TERNARY OPERATOR
//	kondisi?nilai_true:nilai_false;


//	Contoh PERCABANGAN TERNARY OPERATOR
//	int umur;
//	cin>>umur;
//	cout<<"anda"<<(umur>=17?" cukup ":" dibawah ")<<umur;

//--------------------------------PERCABANGAN NESTED IF---------------------------------------

	//PERCABANGAN NESTED IF
//	if(condition){
//		if(condition){
			//statements;
//		}
//	}

	//Contoh PERCABANGAN NESTED IF
//	int bilangan;
//	cin>>bilangan;
//	if(bilangan>0){
//		cout<<"bilangan positif\n";
//		if(bilangan%2==0){
//			cout<<"bilangan genap\n";
		
//		}else if(bilangan%2==1){
//			cout<<"bilangan ganjil\n";
//		}
//	}else{
//		cout<<"Bilangan negatif\n";
//	}

//---------------------------------lATIHAN PERCABANGAN--------------------------------------

//lATIHAN PERCABANGAN IF
//	int kelas;
//	cin>>kelas;
//	if(kelas<18){
//		cout<<"Anda di labor 2";
//	}else{
//		cout<<"Anda di labor 3";
//	}
 
 
//	string password;
//	cout<<"Masukkan Password: ";
//	cin>>password;
//	if(password=="syahdam120305"){
//		cout<<"Welcome Sir Syahdam Rizky Firdaus Yang Ganteng";
//	}else{
//		cout<<"Password Wrong Sir,Please Try Again ! ";
//	}


//LATIHAN PERCABNGAN IF ELSE IF
//	int nilai;
//	string grade;
	
//	cout<<"Masukkan Nilai Anda : ";
//	cin>>nilai;
	
//	if(nilai>90){
//		grade = "A";
//	}else if(nilai>80){
//		grade = "B+";
//	}else if(nilai>70){
//		grade = "B";
//	}else if(nilai>60){
//		grade = "C+";
//	}else if(nilai>50){
//		grade = "C";
//	}else if(nilai>40){
//		grade = "D+";
//	}else if(nilai>30){
//		grade = "D";
//	}else {
//		grade = "F";
//	}
//	cout<<"Grade Anda : \n"<<grade;


//lATIHAN TERNARY OPERATOR
//	int nilai;
//	cout<<"Berapa Hasil 9+13 : ";
//	cin>>nilai;
	
//	string hasil = (nilai == 22)? "Benar,Selamat Kamu Menang Kuis " : " Salah,Silahkan Coba Lagi ";
//	cout<<"Jawaban Anda : "<<hasil;


//LATIHAN NESTED ID
//	string username;
//	cin>>username;
//	string password;
//	cin>>password;
//	
//	if(username=="syahdam"){
//		if(password=="syahdam120305"){
//			cout<<"Selamat Datang Sir";
//		}else{
//			cout<<"Password Salah,Coba Lagi";
//		}
//	}else{
//		cout<<"Maaf,Anda Siapa Sir ? ";
//	}



//--------------------------------KALKULATOR 1---------------------------------------
//	float nilai1,nilai2,hasil;
//	char operatorr;
//	
//	cout<<"masukkan nilai 1 : ";
//	cin>>nilai1;
//	cout<<"masukkan nilai 2 : ";
//	cin>>nilai2;
//	cout<<"operator +,-,*,/ :";
//	cin>>operatorr;
//		if(operatorr=='+'){
//		hasil=nilai1+nilai2;
//	} if(operatorr=='-'){
//		hasil=nilai1-nilai2;
//	} if(operatorr=='*'){
//		hasil=nilai1*nilai2;
//	} if(operatorr=='/'){
//		hasil=nilai1/nilai2;
//	}
//	
//	cout<<"Hasilnya : "<<hasil;
	
	
	
//--------------------------------KALKULATOR 2---------------------------------------
//	int angka1,angka2,opr;
//	float hasil;
//	string ops;
//	
//	cout<<"Pilih operator"<<endl;
//	cout<<"1.+"<<endl;
//	cout<<"2.-"<<endl;
//	cout<<"3.*"<<endl;
//	cout<<"4./"<<endl;
//	cout<<endl;
//	
//	cout<<"Masukan operator: ";
//	cin>>opr;
//	cout<<"Masukan Bilangan pertama : ";
//	cin>>angka1;
//	cout<<"Masukan Bilangan kedua : ";
//	cin>>angka2;	
//	
//	switch(opr){
//	        case 1 : hasil=angka1+angka2;
//			ops='+';
//			break;
//		case 2: hasil=angka1-angka2;
//			ops='-';
//			break;
//		case 3 : hasil=angka1*angka2;
//			ops='*';
//			break;
//		case 4 : hasil=angka1/angka2;
//			ops='/';
//			break;
//		default :
//			cout<<"Salah Masukan Operator"<<endl;
//			}
//	cout<<"Hasilnya : "<<hasil<<endl;


	
	
//--------------------------------PERULANGAN WHILE---------------------------------------
//	while(true){
//		cout<<"lupakan dia..."<<endl;
//	}
	
//Contoh PERULANGAN WHILE
//	char ulangi='y';
//	int counter=0;
//	
//	while(ulangi=='y'){
//		cout<<"Apakah Zahar pretty? "<<endl;
//		cout<<"Jawab (y/t)";
//		cin>>ulangi;
//		
//		
//	}
//
//	cout<<"ya,zahar always pretty"<<endl;
//	cout<<"pokoknya zahar always pretty";
