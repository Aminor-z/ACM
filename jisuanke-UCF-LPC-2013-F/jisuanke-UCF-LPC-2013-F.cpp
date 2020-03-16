#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;

struct POS
{
	POS() { x = 0; y = 0; }
	int x, y;
	string s = "RULD";
	string::iterator iter = s.begin();
	void TurnLeft()
	{
		
		if (iter == s.end() - 1)iter = s.begin();
		else iter++;
	}
	void TurnRight()
	{
		if (iter == s.begin())iter = s.end() - 1;
		else iter--;
	}
	void UTurn()
	{
		TurnRight();
		TurnRight();
	}
	void Move(int n)
	{
		switch (*iter)
		{
		case 'R':
			x += n;
			break;
		case 'U':
			y += n;
			break;
		case 'L':
			x -= n;
			break;
		case 'D':
			y -= n;
			break;
		}
	}
};
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	cin >> n;
	for (int w = 1; w <= n; w++)
	{
		POS pos;
		int set;
		cin >> set;
		for (int i = 0; i < set; i++)
		{
			string s;
			cin >> s;
			if (s == "MOVE")
			{
				int t;
				cin >> t;
				pos.Move(t);
			}
			else if (s == "LEFT") pos.TurnLeft();
			else if (s == "RIGHT") pos.TurnRight();
			else if (s == "UTURN")pos.UTurn();
		}
	
		int cx, cy,dx,dy;
		cin >> cx >> cy;
		cin >> dx >> dy;	
		cout << "Robot Program #" << w << ":" << endl;
		cout << "The robot is at (" << pos.x << "," << pos.y << ")" << endl;
		if (pos.x > cx)
		{
			switch (*pos.iter)
			{
			case 'R':
				pos.UTurn();
				cout << "UTURN" << endl;
				break;
			case 'U':
				pos.TurnLeft();
				cout << "LEFT" << endl;
				break;
			case 'D':
				pos.TurnRight();
				cout << "RIGHT" << endl;
				break;
			}
			cout << "MOVE " << pos.x - cx << endl;
			pos.Move(pos.x - cx);
			
		}
		else if (pos.x < cx)
		{
			switch (*pos.iter)
			{
			case 'L':
				pos.UTurn();
				cout << "UTURN" << endl;
				break;
			case 'D':
				pos.TurnLeft();
				cout << "LEFT" << endl;
				break;
			case 'U':
				pos.TurnRight();
				cout << "RIGHT" << endl;
				break;
			}
			cout << "MOVE " << cx - pos.x << endl;
			pos.Move(cx - pos.x);
			
		}
		if (pos.y >cy)
		{
			switch (*pos.iter)
			{
			case 'U':
				pos.UTurn();
				cout << "UTURN" << endl;
				break;
			case 'L':
				pos.TurnLeft();
				cout << "LEFT" << endl;
				break;
			case 'R':
				pos.TurnRight();
				cout << "RIGHT" << endl;
				break;
			}
			cout << "MOVE " << pos.y - cy << endl;
			pos.Move(pos.y - cy);
			
		}
		else if (pos.y < cy)
		{
			switch (*pos.iter)
			{
			case 'D':
				pos.UTurn();
				cout << "UTURN" << endl;
				break;
			case 'R':
				pos.TurnLeft();
				cout << "LEFT" << endl;
				break;
			case 'L':
				pos.TurnRight();
				cout << "RIGHT" << endl;
				break;
			}
			cout << "MOVE " << cy  -pos.y << endl;
			pos.Move(cy - pos.y);
			
		}



		if (pos.x > dx)
		{
			switch (*pos.iter)
			{
			case 'R':
				pos.UTurn();
				cout << "UTURN" << endl;
				break;
			case 'U':
				pos.TurnLeft();
				cout << "LEFT" << endl;
				break;
			case 'D':
				pos.TurnRight();
				cout << "RIGHT" << endl;
				break;
			}
			cout << "MOVE " << pos.x - dx << endl;
			pos.Move(pos.x - dx);

		}
		else if (pos.x < dx)
		{
			switch (*pos.iter)
			{
			case 'L':
				pos.UTurn();
				cout << "UTURN" << endl;
				break;
			case 'D':
				pos.TurnLeft();
				cout << "LEFT" << endl;
				break;
			case 'U':
				pos.TurnRight();
				cout << "RIGHT" << endl;
				break;
			}
			cout << "MOVE " << dx - pos.x << endl;
			pos.Move(dx - pos.x);

		}
		if (pos.y > dy)
		{
			switch (*pos.iter)
			{
			case 'U':
				pos.UTurn();
				cout << "UTURN" << endl;
				break;
			case 'L':
				pos.TurnLeft();
				cout << "LEFT" << endl;
				break;
			case 'R':
				pos.TurnRight();
				cout << "RIGHT" << endl;
				break;
			}
			cout << "MOVE " << pos.y - dy << endl;
			pos.Move(pos.y - dy);

		}
		else if (pos.y < dy)
		{
			switch (*pos.iter)
			{
			case 'D':
				pos.UTurn();
				cout << "UTURN" << endl;
				break;
			case 'R':
				pos.TurnLeft();
				cout << "LEFT" << endl;
				break;
			case 'L':
				pos.TurnRight();
				cout << "RIGHT" << endl;
				break;
			}
			cout << "MOVE " << dy -pos.y  << endl;
			pos.Move(dy - pos.y);

		}
		cout << endl;
	}
	return 0;
}

