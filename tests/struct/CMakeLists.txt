project(struct-factory)

add_executable(
    ${PROJECT_NAME}
    main.cpp
    bottin_atom.cpp
    )

target_include_directories(
    ${PROJECT_NAME}
    PUBLIC
    ${Qt5Sql_INCLUDE_DIRS}

    )
