#include <iostream>
using namespace std;
int main()
{

    int floors, thirteen_floor = 13, rooms, occupied, unoccupied,
                sum_room = 0, tot_occup = 0, tot_unoccup = 0, floor;
    cout << "Enter number of total floors: ";
    cin >> floors;
    for (int i = 1; i <= floors; i++)
    {
        cout << "\nEnter number of the current floor: ";
        cin >> floor;
        if (thirteen_floor != floor)
        {
            cout << "Enter number of rooms: ";
            cin >> rooms;
            cout << "Enter number of occupied rooms: ";
            cin >> occupied;
            cout << "Enter number of unoccupied rooms: ";
            cin >> unoccupied;
            sum_room = sum_room + rooms;
            tot_occup = tot_occup + occupied;
            tot_unoccup = tot_unoccup + unoccupied;
        }
    }
    cout << "\nTotal rooms are: " << sum_room;

    cout << "\nTotal occupied are: " << tot_occup;

    cout << "\nTotal unoccupied are: " << tot_unoccup;

    cout << "\nPercentage occupied : " << float(tot_occup * 100 / sum_room);

    cout << "\nPercentage unoccupied : " << float(tot_unoccup * 100 / sum_room);
}