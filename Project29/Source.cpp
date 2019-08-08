# include <iostream>
using namespace std;

class Distance
{
private:
	int feet;
	float inches;
public:
	void setdist(int ft, float in)
	{
		feet = ft;
		inches = in;
	}
	void getdist()
	{
		cout << "Please! Enter number pounds: "; cin >> feet;
		cout << "Please! Enter number inches: "; cin >> inches;
	}
	void showdis()
	{
		cout << feet << "\'-" << inches << " '' " << endl;
	}
};
int main()
{
	Distance d1, d2;
	d1.setdist(55, 25.25);
	d2.getdist();
	cout << "dist1 = "; d1.showdis();
	cout << "dist2= "; d2.showdis();
	system("pause");
	return 0;
}