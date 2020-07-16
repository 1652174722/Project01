 /*  int numofstudents,numOfdo;
    while(cin>>numofstudents>>numOfdo)
    {
        int data[30000];
        for(int i=0;i<numofstudents;i++)
        {
            cin>>data[i];
        }
        for(int j=0;j<numOfdo;j++)
        {
            char c1;
            int A,B;
            cin>>c1>>A>>B;
            if(c1=='Q')
            {
                int re;
               re=A;
                if(A!=B)
                {
                    if(A>B)
                    {
                        for(int i=(B-1);i<A;i++)
                        {
                            if(re<data[i])
                                re=data[i];
                        }
                    }
                    else
                    {
                         for(int i=(A-1);i<B;i++)
                        {
                            if(re<data[i])
                                re=data[i];
                        }
                    }
                }
                cout<<re<<endl;
                
            }
            else
            {
                if(c1=='U')
                {
                    data[A-1]=B;
                }
            }
        }
    }*/

 /*   string st="zwrzyiopersysy";
	string st1=st,st2=st;
	const char *p,*p1;
	p=st1.data();
	p1=st2.data();
	int length;
	length=st.length();
	for(int i=0;i<length;i++)
	{
		for(int j=0;j<length;j++)
		{
			if(p[i]==p1[j]&&p[i]!=' ')
			{
				if(i<j)
				{
					st.replace(j,1," ");
				}
			}
		}
	}
	int l=st.length();
   for(int i=0;i<l;i++)
   {
	   int index;
	   index=st.find(' ');
	   if(index!=-1)
	   {
	       string st4,st5;
	       st4=st.substr(0,index);
	       st5=st.substr(index+1);
	       st=st4+st5;
	   }

   }
   cout<<st<<endl;*/