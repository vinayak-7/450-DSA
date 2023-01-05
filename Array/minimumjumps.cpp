int jump=0,pos=0,des=0;
        if(n==1)
        {
            return 0;
        }
        else if (arr[0]==0)
        {
            return -1;
        }
        
        for(int i=0;i<n-1;i++){
            des=max(des,arr[i]+i);
            if(i==n-1){
              break;
              
            }
        
            if(pos==i){
                pos=des;
                jump++;
            }
            
        }
        
        if(pos<n-1) return -1;
        return jump;
