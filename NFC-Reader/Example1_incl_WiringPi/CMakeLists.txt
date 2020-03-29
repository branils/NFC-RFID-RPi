cmake_minimum_required(VERSION 3.13)



PROJECT(Example1_incl_WiringPi)


FILE(GLOB Example1_incl_WiringPi_Sources
    *.c
    src/*.c
)

include_directories(
    intfs
    types
)


ADD_EXECUTABLE(Example1_incl_WiringPi
    ${Example1_incl_WiringPi_Sources}
)

TARGET_LINK_LIBRARIES(
    Example1_incl_WiringPi



    # NfcrdlibEx1_BasicDiscoveryLoop
	# it is necessary to ignore / comment NfcrdlibEx1_BasicDiscoveryLoop because otherwise an error would appear: /usr/bin/ld: cannot find -lNfcrdlibEx1_BasicDiscoveryLoop collect2: error: ld returned 1 exit status



    NxpRdLib_Osal
    NxpRdLib_Platform
    NxpRdLib_acDiscLoop
    NxpRdLib_halHw
    NxpRdLib_balReg
    NxpRdLib_KeyStore
    NxpRdLib_phTools
    NxpRdLib_palFelica
    NxpRdLib_palI18092mPI
    NxpRdLib_palI14443p4a
    NxpRdLib_palI14443p4
    NxpRdLib_palI14443p4
    NxpRdLib_palMifare
    NxpRdLib_alFelica
    NxpRdLib_alMful
    NxpRdLib_alMfdf
    NxpRdLib_alT1T
    NxpRdLib_alTop
    NxpRdLib_alMfc
    NxpRdLib_palSli15693
    NxpRdLib_palI18000p3m3
    NxpRdLib_alI15693
    NxpRdLib_alI18000p3m3
    NxpRdLib_alSli
    NxpRdLib_palEpcUid
    NxpRdLib_lnLlcp
    NxpRdLib_palI14443p4mC
    NxpRdLib_palI18092mT
    NxpRdLib_ceT4T
    NxpRdLib_palEpcUid
)

# from Stackoverflow:

# Locate libraries and headers
find_package(WiringPi REQUIRED)
find_package(Threads REQUIRED)



# Include headers
include_directories(${WIRINGPI_INCLUDE_DIRS})

# Link against libraries
target_link_libraries(Example1_incl_WiringPi ${WIRINGPI_LIBRARIES})
target_link_libraries(Example1_incl_WiringPi ${CMAKE_THREAD_LIBS_INIT})


# end of Stackoverflow contents 
