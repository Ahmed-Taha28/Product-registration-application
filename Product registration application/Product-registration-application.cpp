#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
using namespace std;
 /* ifstream read
   ofstream write
   fstream r+w mood ios::out --> w   ||ios::app appent*/
   class prod
   {
   private :
    int pno; //number of product
    string pname; //name of product
    float pprice , pqntty; //price ,quantity of product
   public :
    void creatP()  //function for create the product
    {
        cout << "\n the product number:\n"; cin >> pno;
        cout << "\n the product name:\n"; cin >> pname;
            cout << "\n the product price:\n"; cin >> pprice;
                    cout << "\n the product Quantity:\n"; cin >> pqntty;


    }
    void data() //function for get information the product
    {
                cout << "\n the product number is\n :"<< pno;
                cout << "\n the product name is\n: "<< pname;
                cout << "\n the product price is\n: "<<pprice;
                cout << "\n the product Quantity is\n: "<< pqntty;

    }
    int Pno ()
    {
        return pno;
    }
    string Pname ()
    {
        return pname ;
    }
    float Pprice()
    {
        return pprice;
    }
        float Pqntty()
    {
        return pqntty;
    }
   };
    prod pro ; //object
    fstream fp ; //object from fstream
    void write() //function for write the product in my file
    {
        fp.open("ph.docs", ios::out|ios::app);
        pro.creatP();
        fp.write((char*)&pro , sizeof(prod));
        fp.close();
        cout << "\n succesd \n";
        getch(); //wait input ;bus
    }
    void disp() //function for display the product from my file
    {
        cout << "\n all the product information \n ";
        fp.open("ph.docs",ios::in);
        while(fp.read((char*)&pro,sizeof(prod)))
        {
            pro.data();
            cout << "\n\n -----------------------\n";
            getch();
        }
        fp.close();
    getch(); // get char
    }
    void src(int n) //function for search my product from file
    { int flag =0;
        fp.open("ph.docs",ios::in);
        while(fp.read((char*)&pro,sizeof(prod)))
              {
                  if (pro.Pno()==n)
                {
                    pro.data();
                    flag =1;
                }
              }
              fp.close();
         if (flag ==0) {
            cout << "\n not found \n";
            getch();
         }
    }
    void del () //function for delete the product from file
    {
        int num;
        cout << "\n\n Enter for delete product\n "; cin >> num;
        fp.open ("ph.docs",ios::in | ios :: out);
        fstream fp2;
        fp2.open("replace.docs",ios ::out );
        fp.seekg(0,ios :: beg);
        while(fp.read((char*)&pro,sizeof(prod)))
              {
                  if (pro.Pno()!=num)
                {
               fp2.write ((char*)&pro,sizeof(prod));
                }
              }
fp2.close();
fp.close ();
remove ("ph.docs");
cout << "\n The product deleted\n";
getch();
    }

int main()
{
char ch;
do
{
  cout << " \n menu\n";
  cout << "==============================\n";
    cout << " 1-Enter a new product \n";
      cout << "\ 2-show all products\n";
        cout << "\ 3-Search for the product\n";
          cout << "\ 4-Delete The product\n";
            cout << " 5-Exit\n";
            cout << "==============================\n";
    ch = getch();
    switch (ch)
   {
    case '1':
    write();
    break;
     case '2':
    disp();
    break;
     case '3':
    int n ;
    cout << "Enter the number to search :\n"; cin >> n;
    src(n);
    break;
     case '4':
    del();
    break;
     case '5':
   exit(0);
    break;
    default :
        cout << "Error\n ";
        exit(0);
}
} while (ch!=5);

}
