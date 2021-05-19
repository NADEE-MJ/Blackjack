include(inc/CMakeLists.txt)
include(src/CMakeLists.txt)

add_executable(BlackjackGame ${execSources} ${execHeaders})
target_include_directories(BlackjackGame PUBLIC inc)

# Inc/CMakeLists.txt
set(execHeaders
    inc/Card.h
    inc/Deck.h
    inc/Hand.h
    inc/TextCard.h
)

# Src/CMakeLists.txt    
set(execSources
    src/Main.cpp
    src/Deck.cpp
    src/Hand.cpp
    src/Card.cpp
)