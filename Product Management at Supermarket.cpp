#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#include<stdio.h>
#include<iomanip.h>
#include<string.h>
#include<graphics.h>
#include<dos.h>
/*********************************************************
                        CLASS SHOP
*********************************************************/
class SHOP
{
    public:
        int code;
        char name[30];
        int quantity; double price,tax;
    /****************************************************
                FUNCTION TO GET INFORMATION
    ****************************************************/
    void getinfo() {
        setcolor(RED);
        settextstyle(1,0,4);
        outtextxy(100,50,"\n\t\tENTERPRODUCT DETAILS");
        settextstyle(1,0,2);
        outtextxy(100,90,"\n\tEnter product code: ");
        cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t";
        cin>>code;
        outtextxy(100,130,"\n\tEnter product name: ");
        cout<<"\n\n\t\t\t\t\t\t";
        gets(name);
        outtextxy(100,170,"\n\tEnter quantity of product: ");
        cout<<"\n\n\t\t\t\t\t\t";
        cin>>quantity;
        outtextxy(100,210,"\n\tEnter price of product: ");
        cout<<"\n\t\t\t\t\t\t";
        cin>>price;
        taxation();
    }
    /****************************************************
                FUNCTION TO SHOW INFORMATION
    ****************************************************/
    void showinfo() {
        setcolor(CYAN);
        settextstyle(1,0,4);
        outtextxy(100,90,"\n\t\tPRODUCT DETAILS");
        settextstyle(1,0,2);
        outtextxy(100,130,"\n\tProduct Code: ");
        cout<<"\n\n\n\n\t\t\t\t\t"<<code;
        outtextxy(100,170,"\n\tProduct Name: ");
        cout<<"\n\n\t\t\t\t\t"<<name;
        outtextxy(100,210,"\n\tProduct Quantity: ");
        cout<<"\n\n\n\t\t\t\t\t"<<quantity;
        outtextxy(100,250,"\n\tProduct Price: ");
        cout<<"\n\n\t\t\t\t\t"<<price;
    }
    /****************************************************
                FUNCTION TO MODIFY INFORMATION
    ****************************************************/
    void modifyinfo() {
        outtextxy(100,300,"\n\tProduct Code: ");
        cout<<"\n\n\n\t\t\t\t\t"<<code;
        outtextxy(100,330,"\n\t\tENTER NEW PRODUCT DETAILS");
        outtextxy(100,360,"\n\tEnter new product name: ");
        cout<<"\n\n\n\n\t\t\t\t\t\t\t";
        gets(name);
        outtextxy(100,400,"\n\tEnter new quantity of product: ");
        cout<<"\n\n\t\t\t\t\t\t\t"; cin>>quantity;
        outtextxy(100,440,"\n\tEnter new price of product:");
        cout<<"\n\n\t\t\t\t\t\t\t"; cin>>price;
        taxation();
    }
    /****************************************************
            FUNCTION TO SHOW ALL INFORMATION
    ****************************************************/
    void showallinfo() {
        cout<<setw(4)<<"\n"<<setw(19)<<code<<setw(19)<<name<<setw(24)<<quantity<<setw(20)<<price <<setw(1)<<”\n”;
    }
    /****************************************************
                FUNCTION TO CALCULATE TAX
    ****************************************************/
    double taxation() {
        if(price<1000) {
        tax=price*0.05; price=price+tax; return price;
        } if(price>=1000||price<10000) {
        tax=price*0.15; price=price+tax; return price;
        } if(price>=10000||price<50000) {
        tax=price*0.25; price=price+tax; return price;
        } if(price>=50000) {
        tax=price*0.4; price=price+tax; return price;
        }
    }
    /****************************************************
                FUNCTION TO RETURN PRODUCT CODE
    ****************************************************/
    inline int retcode() {
        return code;
    }
    /****************************************************
            FUNCTION TO RETURN PRODUCT NAME
    ****************************************************/
    inline char retname() {
        return name[30];
    }
}shop;
/*********************************************************
                        WELCOME
*********************************************************/
void welcome() {
    cleardevice();
    for(int c=0;c<150;c++) {
    setcolor(WHITE); fillellipse(325,240,c*2,c); delay(8);
    }
    setcolor(0);
    settextstyle(1,0,6);
    outtextxy(45,200,"AAYSRI SUPERMARKET");
    getch();
}
/*********************************************************
                        CREDITS
*********************************************************/
void intro() {
    cleardevice(); settextstyle(1,0,4);
    setcolor(GREEN);
    rectangle(10,10,630,470); outtextxy(100,50,"Developed by:"); settextstyle(1,0,5); outtextxy(100,200,"AAYUSH SRIVASTAVA");
    getch();
}
/*********************************************************
                        LOGIN
*********************************************************/
void pass() {
    cleardevice();
    char use[20],pass[7];
    setcolor(RED);
    settextstyle(1,0,5);
    outtextxy(90,100,"LOGIN:");
    settextstyle(1,0,2);
    outtextxy(90,160,"Enter username: ");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t";
    gets(use);
    if(strcmp(use,"srivastavaayu")==0)
    {
        outtextxy(90,220,"Enter password: ");
        cout<<"\n\n\n\t\t\t\t";
        pass[0]=getch();
        cout<<"*";
        pass[1]=getch();
        cout<<"*";
        pass[2]=getch();
        cout<<"*";
        pass[3]=getch();
        cout<<"*";
        pass[4]=getch();
        cout<<"*";
        pass[5]=getch();
        cout<<"*";
        pass[6]=NULL;
        getch();
        if(strcmp(pass,"AAYUSHSRIVASTAVA")==0)
        {
            int r;
            settextstyle(1,0,4);
            cout<<"\n\t.";
            delay(150);
            for(r=0; r<8; r++)
            {
                cout<<"\t.";
                delay(150);
            }
            cout<<"\t\t."; d
            elay(150);
            for(r=0; r<8; r++)
            {
                cout<<"\t.";
                delay(150);
            }
            cout<<"\t\t.";
            delay(300);
            for(r=0; r<8; r++)
            {
                cout<<"\t.";
                delay(300);
            }
            outtextxy(220,330,"\n\n\n\t\t\t\tAccess granted!");
        }
        else
        {
            cout<<"\n\n\n\t\t\t\tIncorrect Password!!";
            getch();
            exit(0);
        }
    }
    else
    {
        cout<<"\n\t\t\t\tIncorrect Username!!";
        getch();
        exit(0);
    }
    getch();
}
void main() {
    clrscr();
    int gdriver=DETECT,gmode; initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
    welcome();
    intro();
    pass();
    to:
    clrscr();
    cleardevice();
    int choice;
    char go;
    fstream f,f2;
    char ch;
    int co,flag=0;
    char na[30];
    float pr;
    /****************************************************
                            MENU
    ****************************************************/
    setcolor(GREEN);
    settextstyle(1,0,4);
    outtextxy(100,20,"\n\t\tOPERATIONS MENU ");
    settextstyle(1,0,2);
    outtextxy(100,70,"\n\t1.Add a new product");
    outtextxy(100,100,"\n\t2.Show all the products");
    outtextxy(100,130,"\n\t3.Check for product availability");
    outtextxy(100,160,"\n\t4.Modify a product");
    outtextxy(100,190,"\n\t5.Delete a product");
    outtextxy(100,220,"\n\t6.Exit");
    outtextxy(100,250,"\n\tSelect an option (1/2/3/4/5/6): ");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t \t\t\t\t\t";
    cin>>choice;
    switch(choice)
    {
        /***************************************************
                        ADD A NEW PRODUCT
        ****************************************************/
        case 1: clrscr(); cleardevice();
                f.open("SHOP .dat",ios::binary|ios::out|ios::app);
                shop.getinfo();
                f.write((char*)&shop,sizeof(SHOP));
                f.close();
                setcolor(RED);
                settextstyle(1,0,2);
                outtextxy(100,260,"\n\tProduct successfully entered!");
                outtextxy(100,280,"\n\tDo you want to add more products(Y/N)");
                cout<<"\n\n\n\t\t\t\t\t\t\t\t";
                cin>>go;
                if(go=='Y'||go=='y')
                    goto to;
                else
                    break;
        /***************************************************
                         SHOW ALL PRODUCTS
        ****************************************************/
        case 2: clrscr();
                cleardevice();
                cout.setf(ios::left);
                cout<<"\n\n********************************** PRODUCT LIST *********************************";
                cout<<"\n\n\n==================== ============================== =============================";
                cout<<"\n PRODUCT CODE PRODUCT NAME PRODUCT QUANTITY PRODUCT PRICE";
                cout<<"\n\n\n==================== ============================== =============================";
                f.open("SHOP .dat",ios::binary||ios::in);
                while(f.read((char*)&shop,sizeof(SHOP))) {
                    shop.showallinfo();
                }
                f.close();
                cout<<"\n\tDo you want to add more products(Y/N)";
                cin>>go;
                if(go=='Y'||go=='y')
                    goto to;
                else
                    break;
        /***************************************************
                    CHECK FOR PRODUCT AVAILABILITY
        ****************************************************/
        case 3: clrscr();
                cleardevice();
                setcolor(CYAN);
                settextstyle(1,0,1);
                outtextxy(0,20,"\nHow do you want to search the product ('C' for code,'N' for name)");
                cout<<"\n\n\n\t\t\t\t\t\t\t\t\t";
                cin>>ch;
                if(ch=='C'||ch=='c') {
                    outtextxy(100,55,"\n\tEnter the code of product to be searched for: ");
                    cout<<"\n\t\t\t\t\t\t\t\t\t";
                    cin>>co;
                }
                else if(ch=='N'||ch=='n') {
                    outtextxy(100,55,"\n\tEnter the name of product to be searched for: ");
                    cout<<"\n\t\t\t\t\t\t\t\t\t";
                    gets(na);
                }
                else
                    outtextxy(100,55,"\n\tInvalid Choice");
                f.open("SHOP .dat",ios::binary|ios::in);
                while(f.read((char*)&shop,sizeof(SHOP))) {
                    if(ch=='C'||ch=='c') {
                        if(shop.retcode()==co) {
                            shop.showinfo();
                            flag=1;
                        }
                    }
                    else if(ch=='N'||ch=='n') {
                        if(strcmpi(shop.name,na)==0) {
                            shop.showinfo();
                            flag=1;
                        }
                    }
                }
                f.close();
                if(flag==0)
                    outtextxy(100,200,"\n\tProduct does not exist!!");
                outtextxy(100,280,"\n\tDo you want to search more products(Y/N)");
                cout<<"\n\n\n\t\t\t\t\t\t";
                cin>>go;
                if(go=='Y'||go=='y')
                    goto to;
                else
                    break;
        /***************************************************
                        MODIFY A PRODUCT
        ****************************************************/
        case 4: clrscr();
                cleardevice();
                setcolor(CYAN);
                settextstyle(1,0,1);
                outtextxy(0,20,"\nHow do you want to search the product ('C' for code,'N' for name)");
                cout<<"\n\n\n\t\t\t\t\t\t\t\t\t";
                cin>>ch;
                if(ch=='C'||ch=='c') {
                    outtextxy(100,55,"\n\tEnter the code of product to be searched for: ");
                    cout<<"\n\t\t\t\t\t\t\t\t\t";
                    cin>>co;
                }
                else if(ch=='N'||ch=='n') {
                    outtextxy(100,55,"\n\tEnter the name of product to be searched for: ");
                    cout<<"\n\t\t\t\t\t\t\t\t\t";
                    gets(na);
                }
                else
                    outtextxy(100,55,"\n\tInvalid Choice");
                f.open("SHOP .dat",ios::binary|ios::in|ios::out);
                while(f.read((char*)&shop,sizeof(SHOP))&&flag==0) {
                    if(ch=='C'||ch=='c') {
                        if(shop.retcode()==co) {
                            shop.showinfo();
                            outtextxy(100,280,
                            "\n\nEnter the new details of product\n");
                            shop.modifyinfo();
                            int pos=(-1)*sizeof(SHOP);
                            f.seekp(pos,ios::cur);
                            f.write((char*)&shop,sizeof(SHOP));
                            outtextxy(100,450,"\n\tProduct Modified!");
                            flag=1;
                        }
                    }
                    else if(ch=='N'||ch=='n') {
                        if(strcmpi(shop.name,na)==0) {
                            shop.showinfo(); outtextxy(100,280,
                            "\n\nEnter the new details of product\n");
                            shop.modifyinfo();
                            int pos=(-1)*sizeof(SHOP);
                            f.seekp(pos,ios::cur);
                            f.write((char*)&shop, sizeof(SHOP));
                            outtextxy(100,450,"\n\tProduct Modified!");
                            flag=1;
                        }
                    }
                }
                f.close();
                if(flag==0)
                    outtextxy(100,450,"\n\tProduct not found!!");
                else
                    outtextxy(100,460,"\n\tDo you want to modify more products(Y/N)");
                cout<<"\n\n\t\t\t\t\t\t\t";
                cin>>go;
                if(go=='Y'||go=='y')
                    goto to;
                else
                    break;
        /***************************************************
                        DELETE A PRODUCT
        ****************************************************/
        case 5: clrscr();
                cleardevice();
                setcolor(CYAN);
                settextstyle(1,0,1);
                outtextxy(0,20,"\nHow do you want to search the product ('C' for code,'N' for name)");
                cout<<"\n\n\n\t\t\t\t\t\t\t\t\t";
                cin>>ch;
                if(ch=='C'||ch=='c') {
                    outtextxy(100,55,"\n\tEnter the code of product to be searched for: ");
                    cout<<"\n\t\t\t\t\t\t\t\t\t";
                    cin>>co;
                }
                else if(ch=='N'||ch=='n') {
                    outtextxy(100,55,"\n\tEnter the name of product to be searched for: ");
                    cout<<"\n\t\t\t\t\t\t\t\t\t";
                    gets(na);
                }
                else
                    outtextxy(100,55,"\n\tInvalid Choice!!");
                f.open("SHOP .dat",ios::binary|ios::in);
                f2.open("TEMP .dat",ios::binary|ios::out);
                f.seekg(0,ios::beg);
                while(f.read((char*)&shop,sizeof(SHOP))) {
                    if(ch=='C'||ch=='c') {
                        if(shop.retcode()!=co) {
                            f2.write((char*)&shop,sizeof(SHOP));
                        }
                    }
                    else if(ch=='N'||ch=='n') {
                        if(strcmpi(shop.name,na)!=0) {
                            f2.write((char*)&shop,sizeof(SHOP));
                        }
                    }
                }
                f2.close();
                f.close();
                remove("SHOP .dat");
                rename("TEMP.dat","SHOP.dat");
                outtextxy(100,80,"\n\tProduct deleted!");
                outtextxy(100,110,"\n\tDo you want to delete more products(Y/N)");
                cout<<"\n\n\n\t\t\t\t\t\t";
                cin>>go;
                if(go=='Y'||go=='y')
                    goto to;
                else
                    break;
        /***************************************************
                                EXIT
        ****************************************************/
        case 6: clrscr();
                cleardevice();
                setcolor(RED);
                settextstyle(1,0,6);
                outtextxy(45,200,"\n\tThanks for visiting!");
                getch();
                exit(0);
        default:outtextxy(100,300,"\n\tWrong Choice!!");
                outtextxy(100,350,"\n\tDo you want to try again?(Y/N)");
                cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
                cin>>go;
                if(go=='Y'||go=='y')
                    goto to;
                else
                    break;
    }
    getch();
}
