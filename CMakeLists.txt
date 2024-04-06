cmake_minimum_required(VERSION 3.10)

project(BudgetManager)

# find_package(wxWidgets REQUIRED core base)
# find_package(SQLite3 REQUIRED)
# include(${wxWidgets_USE_FILE})
# If SQLite is installed as a system library, you probably don't need to look it up in particular 
# just link it in target_link_libraries


#Assign all SOURCE files in the src directory to the source variable
file(GLOB SOURCES "src/*.cpp")

#Add the executable
add_executable(BudgetManager ${SOURCES})

#link the libraries
# target_link_libraries() 