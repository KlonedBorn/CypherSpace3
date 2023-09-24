#include <iostream>
#include <algorithm> // std::sort
#include <vector>    // std::vector

/*
    Leetcode Challenge: 1491. Average Salary Excluding the Minimum and Maximum Salary
    Link -> [https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/description/?envType=daily-question&envId=2023-09-23]
    Explanation:
        Since the array contain atleast 3 elements, we only iterate through [1,n-1).
        We sum these values then divide them by count.
*/
class Solution
{
public:
    double average(std::vector<int> &salary)
    {
        std::sort(salary.begin(), salary.end());
        double sum = 0, ct = 0;
        for (int i = 1; i < salary.size() - 1; i++)
        {
            sum += salary.at(i);
            ++ct;
        }
        return sum / ct;
    }
};

int main(int argc, char *argv[])
{
    Solution solution = Solution();
    std::vector<int> tc = {6000, 5000, 4000, 3000, 2000, 1000};
    std::cout << solution.average(tc) << std::endl;
    return 0;
}