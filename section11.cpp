#include <iostream>
#include <vector>

using namespace std;

void checkSize(string output, vector<int> nums)
{
    if(nums.size() == 0)
        cout << output << endl;
}

void displayMenu();
void printNumbers();
void addNumber();
void displayMean(vector<int> &nums);
void displaySmallestNumber(vector<int> &nums);
void displayLargestNumber(vector<int> &nums);

void section11()
{
    char user_input {'p'};
    bool has_quit {0};
    vector<int> user_nums;

    while (!has_quit)
        {
            displayMenu();
            cin >> user_input;

            switch(user_input) 
                {
                    case 'P':
                    case 'p':
                        printNumbers();
                        break;
                    case 'A':
                    case 'a':
                        addNumber();
                        break;
                    case 'M':
                    case 'm':
                        displayMean(user_nums);
                        break;
                    case 'S':
                    case 's':
                        displaySmallestNumber(user_nums);
                                      
                        break;
                    case 'L':
                    case 'l':
                        {
                            if(user_nums.size() == 0)
                            {
                                cout << "Unable to determine the largest valuse - no data" << endl;
                            }
                            else
                            {
                                int largest {user_nums.at(0)};
                                for(short i {0}; i < user_nums.size(); i++)
                                    {
                                        if(user_nums.at(i) > largest)
                                        {
                                            largest = user_nums.at(i);
                                        }
                                    }
                                cout << "The largest number is " << largest << endl;
                            }
                        }
                        break;
                    case 'Q':
                    case 'q':
                        cout << " Goodbye" << endl;
                        has_quit = 1;
                        break;
                        
                }
                
                
        }
    
}



void displayMenu()
	{
		cout << "P - Print numbers" << endl;
            cout << "A - Add a number" << endl;
            cout << "M - Display the mean of the number" << endl;
            cout << "S - Display the smallest number" << endl;
            cout << "L - Display the largest number" << endl;
            cout << "Q - Quit" << endl;
            cout << "Enter your choice: ";
	}
	
	
void printNumbers()
	{
		if(user_nums.size() == 0)
            {
                cout << "The List is Empty" << endl;
             }
         else
             {
                 cout << "[ ";
                 for(short i {0}; i < user_nums.size(); i++)
                     {
                         cout << user_nums.at(i) << " ";
                      }
                 cout << "]";
             }
	}
	
void addNumber()
	{
	    int user_num;
        cout << "Enter a number to add: ";
        cin >> user_num;
        user_nums.push_back(user_num);
        cout << "\n" << user_num << "added";
	}
	
	
void displayMean(vector<int> &nums)
	{
		if(user_nums.size() == 0)
            {
                cout << "Unable to calculate the mean - no data" << endl;
            }
         else
             {
                 int mean {0};
                 for(short i {0}; i < user_nums.size(); i++)
                     {
                         mean += user_nums.at(i);
                     }
                     mean /= user_nums.size();
                     cout << mean << endl;
	}
	
	
void displaySmallestNumber(vector<int> &nums)
	{
	    if(user_nums.size() == 0)
            {
                cout << "Unable to determine the smallest valuse - no data" << endl;
            }
        else
            {
                int smallest {user_nums.at(0)};
                for(short i {0}; i < user_nums.size(); i++)
                    {
                        if(user_nums.at(i) < smallest)
                            {
                                smallest = user_nums.at(i);
                            }
                    }
                cout << "The smallest number is " << smallest << endl;
            }

	}