#include <iostream>
#include <cmath>
using namespace std;
//Floor Problem.
int main()
{
    int curr_floor, travel_floor;
    cout << "Enter the current Floor: ";
    cin >> curr_floor;
    cout << "Enter the Torget Floor : ";
    cin >> travel_floor;

    int curr_lift_position[] = {3, 5, 0, 9};
    int final_lift_distance[4];

    for (int i = 0; i < 4; i++)
    {
        final_lift_distance[i] = abs(curr_floor - curr_lift_position[i]) + abs(curr_floor - travel_floor);
    }
    int minimum = final_lift_distance[0];
    int index = 0;

    for (int i = 1; i < 4; i++)
    {
        if (final_lift_distance[i] < minimum)
        {
            minimum = final_lift_distance[i];
            index = i;
        }
    }
    cout << "Lift " << index + 1 << " is closest" << endl;

    return 0;
}