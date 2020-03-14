TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        abstraction.cpp \
        class_object.cpp \
        encapsulation.cpp \
        function_overloading.cpp \
        function_overriding.cpp \
        inheritance.cpp \
        operator_overloading.cpp

DISTFILES += \
    main.txt \
    polymorphism.txt \
    static_dynamic_binding.txt
