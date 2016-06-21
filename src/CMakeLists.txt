# Setup sources
set(PKM_SOURCES
	player.cpp
    )

# Build executable
add_executable(pkm ${PKM_SOURCES})
target_link_libraries(pkm ${SDL2_LIBRARY} ${SDL2_IMG_LIBRARY} ${SDLMIXER_LIBRARY})
target_link_libraries(pkm m)
target_link_libraries(pkm ${Boost_LIBRARIES})
