struct {
    char status; // '-' for inactive, '*' for active
    pthread_mutex_t mutex;
    pthread_cond_t cond;
};

struct {
    char header[4]; // {'F', 'I', 'R', 'E'}
};