/*                        3. C/C++ PROJECT
                             =============
/*  -----------------------  FOOD BILLING SYSTEM  ----------------------- */

#include<iostream>
#include<string>
using namespace std;

int main()
{
    int returntotalbill(void);
    int totalbillamount = returntotalbill();
    cout<< " Your total bill amount is : "<<totalbillamount;
    cout<<"\n\n         Thankyou for you order   \n";
    cout<<"!----------- Have a nice day ------------ !\n\n";
}

int returntotalbill(){
    char c;
    char item;
    char vegitem;
    char non_vegitem;
    float billamount;
    char selectagain;


    cout<<"\n\n---------------- Welcome to Online food order ---------------\n";
    cout<<"------------------- please follow below instructions ------------------\n\n";
    cout<<"Step 1: Please press s to start your order.\n";
    cout<<"Step 2: You can order both veg and non-veg item.\n";
    cout<<"Step 3: Please press a to select veg item.\n";
    cout<<"Step 4: Please press b to select non-veg item.\n";
    cout<<"You will get your final bill after your order.\n";
    cc:
    cout<<"Press for enter: ";
    cin>>c;

if (c=='s'|| c=='S'){
         ss:
         cout<<"Please select your choice.\n";
         cout<<"(a) veg Item            (b) non-veg Item\n";
         cin>>item;
        if(item=='a'||item=='A')
         {
              cout<<"Please select 1, 2, 3, 4, 5 as per your choice :\n";
              cout<<"(1) Paneer :- price-250\n";
              cout<<"(2) Burger :- price-50\n";
              cout<<"(3) Pizza  :- price-100\n";
              cout<<"(4) Chowmin :- price-50\n";
              cout<<"(5) golgappe :- price-30\n";

              vegitemlist:
            cout<<"Choice :";
              cin>>vegitem;

                if(vegitem=='1'){
                                 billamount=billamount+250;
                                 }
                              else if (vegitem=='2'){
                                     billamount=billamount+50;
                                      }
                              else if (vegitem=='3'){
                                     billamount=billamount+100;
                                      }
                              else if (vegitem=='4'){
                                     billamount=billamount+50;
                                      }
                              else if (vegitem=='5'){
                                      billamount=billamount+30;
                                      }
                     else  {
                            cout<<"You have enter wrong value, please try again..!";
                            goto vegitemlist;
                           }
          cout<<"Do you want to add more item, Y or N ? :";
          cin>>selectagain;
                    if(selectagain=='y'|| selectagain=='Y')
                       {
                          goto vegitemlist;
                       }

                    else {
                           return billamount;
                         }
         }


         //   non-veg item selection

         else if (item=='b'|| item=='B')   {   
                  cout<<"Please select 1, 2, 3 as per your choice :\n";
                  cout<<"(1) Chicken :- price-300\n";
                  cout<<"(2) Egg :- price-50\n";
                  cout<<"(3) mutton :- price-500\n";
                  nonvegitemlist:
                  cout<<"choice :";
             cin>>non_vegitem;

              if(non_vegitem=='1'){
                billamount=billamount+250;
              }
              else if (non_vegitem=='2'){
                 billamount=billamount+50;
              }
              else if (non_vegitem=='3'){
                 billamount=billamount+100;
              }
              else{
                cout<<"You have enter wrong value, please try again..!";
                goto nonvegitemlist;
              }

        cout<<"Do you want to add more item, Y or N ? :";
        cin>>selectagain;

              if(selectagain=='y'||selectagain=='Y')
                {
                    goto nonvegitemlist;
                }
              else {
                      return billamount;
                   }
             
         }
         else { 
              cout<<"you have enter wrong value....!\n"<<"please enter the write value..\n";
              goto ss;
         }
    }


else{
         cout<<"You have enter wrong value , please press s!\n";
         goto cc;

    }

return billamount;
}
