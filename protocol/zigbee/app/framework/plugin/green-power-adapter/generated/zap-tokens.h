// This file is generated by ZCL Advanced Platform generator. Please don't edit manually.

// This file contains the tokens for nonSingletons stored in flash

// Types for the tokens
#ifdef DEFINETYPES
#endif // DEFINETYPES

#ifdef DEFINETOKENS
#endif // DEFINETOKENS

// Macro snippet that loads all the attributes from tokens
#define GENERATED_TOKEN_LOADER(endpoint) do { \
} while (false)

// Macro snippet that saves the attribute to token
#define GENERATED_TOKEN_SAVER do {              \
    uint8_t allZeroData[1];                     \
    MEMSET(allZeroData, 0, 1);                  \
    if ( data == NULL ) { data = allZeroData; } \
} while (false)
