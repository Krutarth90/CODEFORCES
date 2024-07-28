bool f=1;
        int d;
        cin>>d;
        if(a[1]>=d)
        {
            if(a[1]==d)
            {
                cout<<b[1]<<" ";
            }
            else
            {
                int t=0;
                int td=a[1];
                int tt=b[1];
                t+=((d)*tt)/td;
                cout<<t<<" ";
            }
            continue;
        }
        int l=1,r=k;
        while(l<r && f)
        {
            int m=(r-l)/2;
            if(a[m]==d)
            {
                cout<<b[m]<<" ";
                f=0;
            }
            else if(a[l]==d)
            {
                cout<<b[l]<<" ";
                f=0;
            }
            else if(a[r]==d)
            {
                cout<<b[r]<<" ";
                f=0;
            }
            else if(d>a[m])
            {
                l=m+1;
            }
            else 
            {
                r=m-1;
            }
            if(l+1==r)
                break;
        }
        
        if(f)
        {
            int i=r;
            int t=b[i-1];
            int td=a[i]-a[i-1];
            int tt=b[i]-b[i-1];
            t+=((d-a[i-1])*tt)/td;
            cout<<t<<" ";
        }