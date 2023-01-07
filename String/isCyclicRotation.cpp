int isCyclicRotation(string &p, string &q) 
{
    //    Write your code here
    if(p.length() != q.length())
    {
        return 0;
    }
    
    string temp = p + p;
    
    if(temp.find(q) != string::npos)
    {
        return 1;
    }
    
    else{
        return 0;
    }
}
