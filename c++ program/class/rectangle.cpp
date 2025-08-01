class Rectangle
{
    public: int length,breadth,area;
    public: void getdata()
    {
        cout<<"Enter length and breadth:";
        cin>>length>>breadth;
    }
    public: void solve()
    {
        area=length*breadth;
    }
    public: void show()
    {
        cout<<"Area ="<< area;
    }
};
int main()
{
Rectangle R1;
R1.getdata();
R1.solve();
R1.show();
}