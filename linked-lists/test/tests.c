#define MUNIT_ENABLE_ASSERT_ALIASES
#include "../../munit/munit.h"
#include "../linkedlist.h"
#include "../linkedlist.c"

static MunitResult
test_init(const MunitParameter params[], void *fixture) {
    LinkedList *ll = linkedList();
    munit_assert_null(ll->head);
    munit_assert_int(ll->size, ==, 0);
    cleanup(ll);
    return MUNIT_OK;
}

static MunitResult
test_insert(const MunitParameter params[], void *fixture) {
    LinkedList *ll = linkedList();
    int a = 9;
    int b = 4;
    insert(ll, a);
    munit_assert_not_null(ll->head);
    munit_assert_int(ll->head->data, ==, a);
    munit_assert_int(ll->size, ==, 1);
    cleanup(ll);
    return MUNIT_OK;
}

static MunitResult
test_insertMultiple(const MunitParameter params[], void *fixture) {
    LinkedList *ll = linkedList();
    int a = 9;
    int b = 4;
    insert(ll, a);
    insert(ll, b);
    munit_assert_not_null(ll->head);
    munit_assert_int(ll->head->data, ==, b);
    munit_assert_int(ll->size, ==, 2);
    cleanup(ll);
    return MUNIT_OK;
}

static MunitResult
test_insertAtIndex(const MunitParameter params[], void *fixture) {
    LinkedList *ll = linkedList();
    int index = 3;
    int data = 10;
    insert(ll, 2);
    insert(ll, 8);
    insert(ll, 5);
    insert(ll, 1);
    insert(ll, 4);
    insertAtIndex(ll, index, data);
    munit_assert_int(ll->head->next->next->next->data, ==, data);
    munit_assert_int(ll->size, ==, 6);
    return MUNIT_OK;
}

static MunitResult
test_insertAtEnd(const MunitParameter params[], void *fixture) {
    LinkedList *ll = linkedList();
    insert(ll, 4);
    insert(ll, 9);
    insertAtEnd(ll, 20);
    int value = ll->head->next->next->data;
    munit_assert_int(value, ==, 20);
    cleanup(ll);
    return MUNIT_OK;
}

int main(int argc, char* argv[]) {
    MunitSuite suite = {
            (char *) "/linked-list",
            NULL,
            NULL,
            MUNIT_TEST_OPTION_NONE,
    };

    MunitTest tests[] = { 
        { (char *) "/linked-list/init", test_init, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
        { (char *) "/linked-list/insert", test_insert, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
        { (char *) "/linked-list/insertMultiple", test_insertMultiple, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
        { (char *) "/linked-list/insertAtIndex", test_insertAtIndex, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
        { (char *) "/linked-list/insertAtEnd", test_insertAtEnd, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    };

    suite.tests = tests;
    return munit_suite_main(&suite, NULL, argc, argv);
};
