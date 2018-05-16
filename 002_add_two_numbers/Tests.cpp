#include "../catch.hpp"
#include "Solution.cpp"


TEST_CASE("add two numbers test01") {
    Solution solution;
    ListNode l1_1(2), l1_2(4), l1_3(3);
    l1_1.next = &l1_2;
    l1_2.next = &l1_3;

    ListNode l2_1(5), l2_2(6), l2_3(4);
    l2_1.next = &l2_2;
    l2_2.next = &l2_3;

    ListNode* actualSolution = solution.addTwoNumbers(&l1_1, &l2_1);

    REQUIRE(actualSolution->val == 7);
    REQUIRE(actualSolution->next->val == 0);
    REQUIRE(actualSolution->next->next->val == 8);
    REQUIRE(actualSolution->next->next->next == NULL);
}


TEST_CASE("add two numbers test02") {
    Solution solution;
    ListNode l1_1(2), l1_2(4);
    l1_1.next = &l1_2;

    ListNode l2_1(5), l2_2(6), l2_3(4);
    l2_1.next = &l2_2;
    l2_2.next = &l2_3;

    ListNode* actualSolution = solution.addTwoNumbers(&l1_1, &l2_1);

    REQUIRE(actualSolution->val == 7);
    REQUIRE(actualSolution->next->val == 0);
    REQUIRE(actualSolution->next->next->val == 5);
    REQUIRE(actualSolution->next->next->next == NULL);
}

TEST_CASE("add two numbers test03") {
    Solution solution;
    ListNode l1_1(9), l1_2(9), l1_3(9);
    l1_1.next = &l1_2;
    l1_2.next = &l1_3;

    ListNode l2_1(9), l2_2(9), l2_3(9);
    l2_1.next = &l2_2;
    l2_2.next = &l2_3;

    ListNode* actualSolution = solution.addTwoNumbers(&l1_1, &l2_1);

    REQUIRE(actualSolution->val == 8);
    REQUIRE(actualSolution->next->val == 9);
    REQUIRE(actualSolution->next->next->val == 9);
    REQUIRE(actualSolution->next->next->next->val == 1);
    REQUIRE(actualSolution->next->next->next->next == NULL);
}
