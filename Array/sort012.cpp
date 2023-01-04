void sort012(int a[], int n)
    {
        // code here 
    int i=n-1;    
    for(int j=n-1;j>=0;j--)
    {        
        if(a[j]!=0){            
            swap(a[i],a[j]);            
            i--;  
        }
    }
    i = 0;
    
    for(int j = 0; j < n ; j++){
        if(a[j] != 2){
            swap(a[j],a[i]);
            i++;
        }
    }
    }
