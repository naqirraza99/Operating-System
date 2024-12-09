#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_BIDDERS 5  // Number of threads bidding on the item

// Structure to represent an auction item
typedef struct {
    int item_id;
    int highest_bid;
    pthread_mutex_t lock;  // Mutex to protect the bid
} AuctionItem;

// Function to initialize an auction item
void init_item(AuctionItem *item, int id) {
    item->item_id = id;
    item->highest_bid = 0;  // Initial bid is 0
    pthread_mutex_init(&item->lock, NULL);  // Initialize mutex lock
}

// Function to simulate bidding on an item
void bid(AuctionItem *item, int bid_amount) {
    pthread_mutex_lock(&item->lock);  // Lock to protect the bid update

    if (bid_amount > item->highest_bid) {
        item->highest_bid = bid_amount;
        printf("New highest bid for item %d: %d\n", item->item_id, item->highest_bid);
    } else {
        printf("Bid of %d is too low for item %d. Current highest bid: %d\n", 
                bid_amount, item->item_id, item->highest_bid);
    }

    pthread_mutex_unlock(&item->lock);  // Unlock the mutex after updating
}

// Function to be executed by each bidder thread
void* bidder_thread(void *arg) {
    AuctionItem *item = (AuctionItem*)arg;
    int bid_amount = rand() % 1000;  // Generate a random bid amount

    printf("Bidder bidding %d on item %d\n", bid_amount, item->item_id);
    bid(item, bid_amount);  // Call the bid function to update the highest bid

    return NULL;
}

int main() {
    // Create an auction item
    AuctionItem item;
    init_item(&item, 1);  // Initialize item with ID 1

    pthread_t bidders[NUM_BIDDERS];  // Thread array for bidders

    // Create threads (bidders)
    for (int i = 0; i < NUM_BIDDERS; i++) {
        pthread_create(&bidders[i], NULL, bidder_thread, (void*)&item);
    }

    // Wait for all bidder threads to finish
    for (int i = 0; i < NUM_BIDDERS; i++) {
        pthread_join(bidders[i], NULL);
    }

    // Print the final highest bid
    printf("Final highest bid for item %d is: %d\n", item.item_id, item.highest_bid);

    // Clean up
    pthread_mutex_destroy(&item.lock);  // Destroy mutex lock

    return 0;
}
