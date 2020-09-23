{  
    
    int a , b ; 
    
    cout<<"\n \nTotal amount of bill = "   ;
    cin>>b   ;
    
    cout<<"\n \nEnter amount given by customer = "  ;
    cin>>a    ;
    
    cout<<"\n \nAmount to be refunded = "    ;
    cout<<a-b   ;
    
    int c = a-b ;
    
    cout<<"\n \nNo. of Rs.25 coins = "    ;
    cout<<c/25  ;
    
    int d = c/25  ;
    
    int e = c-(d*25)  ;
    
    cout<<"\n \nNo. of Rs.10 coins = "  ;
    cout<<e/10  ;
    
    int f = e/10  ;
    
    int g = e-(f*10)  ;
    
    cout<<"\n \nNo. of Rs.5 coins = "  ;
    cout<<g/5  ;
    
    int h = g/5  ;
    
    int i = g-(h*5)   ;
    
    cout<<"\n \nNo. of Rs.1 coins/toffees = "  ;
    cout<<i  ;
    
    return 0 ; }
