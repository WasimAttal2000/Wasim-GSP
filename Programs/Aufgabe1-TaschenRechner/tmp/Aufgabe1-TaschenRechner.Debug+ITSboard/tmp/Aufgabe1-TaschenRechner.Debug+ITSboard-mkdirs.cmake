# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/GSRepo/Wasim-Mohammad-GSP/Programs/Aufgabe1-TaschenRechner/tmp/Aufgabe1-TaschenRechner.Debug+ITSboard"
  "C:/GSRepo/Wasim-Mohammad-GSP/Programs/Aufgabe1-TaschenRechner/tmp/1"
  "C:/GSRepo/Wasim-Mohammad-GSP/Programs/Aufgabe1-TaschenRechner/tmp/Aufgabe1-TaschenRechner.Debug+ITSboard"
  "C:/GSRepo/Wasim-Mohammad-GSP/Programs/Aufgabe1-TaschenRechner/tmp/Aufgabe1-TaschenRechner.Debug+ITSboard/tmp"
  "C:/GSRepo/Wasim-Mohammad-GSP/Programs/Aufgabe1-TaschenRechner/tmp/Aufgabe1-TaschenRechner.Debug+ITSboard/src/Aufgabe1-TaschenRechner.Debug+ITSboard-stamp"
  "C:/GSRepo/Wasim-Mohammad-GSP/Programs/Aufgabe1-TaschenRechner/tmp/Aufgabe1-TaschenRechner.Debug+ITSboard/src"
  "C:/GSRepo/Wasim-Mohammad-GSP/Programs/Aufgabe1-TaschenRechner/tmp/Aufgabe1-TaschenRechner.Debug+ITSboard/src/Aufgabe1-TaschenRechner.Debug+ITSboard-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/GSRepo/Wasim-Mohammad-GSP/Programs/Aufgabe1-TaschenRechner/tmp/Aufgabe1-TaschenRechner.Debug+ITSboard/src/Aufgabe1-TaschenRechner.Debug+ITSboard-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/GSRepo/Wasim-Mohammad-GSP/Programs/Aufgabe1-TaschenRechner/tmp/Aufgabe1-TaschenRechner.Debug+ITSboard/src/Aufgabe1-TaschenRechner.Debug+ITSboard-stamp${cfgdir}") # cfgdir has leading slash
endif()
