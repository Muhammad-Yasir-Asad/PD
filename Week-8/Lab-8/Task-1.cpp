#include <iostream>
using namespace std;
int input(string value);
bool doesBrickFit(int brickHeight,int brickWidth,int brickDepth, int holeWidth,int holeHeight);
void output(int brickHeight,int brickWidth,int brickDepth, int holeWidth,int holeHeight);
main()
{
    int brickHeight = 0, brickWidth = 0, brickDepth = 0, holeWidth = 0, holeHeight = 0;

    brickHeight = input("Brick Height");
    brickWidth = input("Brick Width");
    brickDepth = input("Brick Depth");
    holeWidth = input("hole Width");
    holeHeight = input("Hole Height");

    output(brickHeight,brickWidth,brickDepth,holeWidth,holeHeight);
}
int input(string value)
{
    int data = 0;

    cout << "Enter " << value << " : ";
    cin >> data;

    return data;
}

bool doesBrickFit(int brickHeight,int brickWidth,int brickDepth, int holeWidth,int holeHeight)
{
    int holeArea = holeHeight*holeWidth;
    int BrickArea1 =brickHeight*brickWidth;
    int BrickArea2 =brickHeight*brickDepth;
    int BrickArea3 =brickWidth*brickDepth;
    if ((BrickArea1==holeArea) || (BrickArea2==holeArea) ||(BrickArea3==holeArea))
    {
        return true;
    }

    return false;
    
}
void output(int brickHeight,int brickWidth,int brickDepth, int holeWidth,int holeHeight)
{
    if (doesBrickFit(brickHeight,brickWidth,brickDepth,holeWidth,holeHeight))
    {
        cout << "true";
    }
    else{
        cout << "false";
    }
    
}