##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=restauration
ConfigurationName      :=Debug
WorkspacePath          :=/home/ir2/anb/Documents/Mini-project_Decembre_SNIR2/The_program/Mini_projet_restauration
ProjectPath            :=/home/ir2/anb/Documents/Mini-project_Decembre_SNIR2/The_program/Mini_projet_restauration/restauration
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Axel NGANDU-BISEBA
Date                   :=12/13/23
CodeLitePath           :=/home/ir2/anb/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="restauration.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            := -no-pie $(shell wx-config   --libs --unicode=yes)
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch)IHM 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -Wall $(shell wx-config --cxxflags --unicode=yes  ) $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(shell wx-config --cxxflags --unicode=yes  ) $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/EvtFramePrincipal.cpp$(ObjectSuffix) $(IntermediateDirectory)/FramePrincipal.cpp$(ObjectSuffix) $(IntermediateDirectory)/PorteurCodeBarres.cpp$(ObjectSuffix) $(IntermediateDirectory)/ThreadImpression.cpp$(ObjectSuffix) $(IntermediateDirectory)/MyApp.cpp$(ObjectSuffix) $(IntermediateDirectory)/ThreadGestionCB.cpp$(ObjectSuffix) $(IntermediateDirectory)/ThreadAcquisitionCB.cpp$(ObjectSuffix) $(IntermediateDirectory)/CommunicationThread.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)


$(IntermediateDirectory)/.d:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/EvtFramePrincipal.cpp$(ObjectSuffix): EvtFramePrincipal.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/EvtFramePrincipal.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/EvtFramePrincipal.cpp$(DependSuffix) -MM EvtFramePrincipal.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/ir2/anb/Documents/Mini-project_Decembre_SNIR2/The_program/Mini_projet_restauration/restauration/EvtFramePrincipal.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/EvtFramePrincipal.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/EvtFramePrincipal.cpp$(PreprocessSuffix): EvtFramePrincipal.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/EvtFramePrincipal.cpp$(PreprocessSuffix) EvtFramePrincipal.cpp

$(IntermediateDirectory)/FramePrincipal.cpp$(ObjectSuffix): FramePrincipal.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/FramePrincipal.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/FramePrincipal.cpp$(DependSuffix) -MM FramePrincipal.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/ir2/anb/Documents/Mini-project_Decembre_SNIR2/The_program/Mini_projet_restauration/restauration/FramePrincipal.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FramePrincipal.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/FramePrincipal.cpp$(PreprocessSuffix): FramePrincipal.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/FramePrincipal.cpp$(PreprocessSuffix) FramePrincipal.cpp

$(IntermediateDirectory)/PorteurCodeBarres.cpp$(ObjectSuffix): PorteurCodeBarres.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/PorteurCodeBarres.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/PorteurCodeBarres.cpp$(DependSuffix) -MM PorteurCodeBarres.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/ir2/anb/Documents/Mini-project_Decembre_SNIR2/The_program/Mini_projet_restauration/restauration/PorteurCodeBarres.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PorteurCodeBarres.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PorteurCodeBarres.cpp$(PreprocessSuffix): PorteurCodeBarres.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PorteurCodeBarres.cpp$(PreprocessSuffix) PorteurCodeBarres.cpp

$(IntermediateDirectory)/ThreadImpression.cpp$(ObjectSuffix): ThreadImpression.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ThreadImpression.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ThreadImpression.cpp$(DependSuffix) -MM ThreadImpression.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/ir2/anb/Documents/Mini-project_Decembre_SNIR2/The_program/Mini_projet_restauration/restauration/ThreadImpression.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ThreadImpression.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ThreadImpression.cpp$(PreprocessSuffix): ThreadImpression.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ThreadImpression.cpp$(PreprocessSuffix) ThreadImpression.cpp

$(IntermediateDirectory)/MyApp.cpp$(ObjectSuffix): MyApp.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/MyApp.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/MyApp.cpp$(DependSuffix) -MM MyApp.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/ir2/anb/Documents/Mini-project_Decembre_SNIR2/The_program/Mini_projet_restauration/restauration/MyApp.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MyApp.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MyApp.cpp$(PreprocessSuffix): MyApp.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MyApp.cpp$(PreprocessSuffix) MyApp.cpp

$(IntermediateDirectory)/ThreadGestionCB.cpp$(ObjectSuffix): ThreadGestionCB.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ThreadGestionCB.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ThreadGestionCB.cpp$(DependSuffix) -MM ThreadGestionCB.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/ir2/anb/Documents/Mini-project_Decembre_SNIR2/The_program/Mini_projet_restauration/restauration/ThreadGestionCB.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ThreadGestionCB.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ThreadGestionCB.cpp$(PreprocessSuffix): ThreadGestionCB.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ThreadGestionCB.cpp$(PreprocessSuffix) ThreadGestionCB.cpp

$(IntermediateDirectory)/ThreadAcquisitionCB.cpp$(ObjectSuffix): ThreadAcquisitionCB.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ThreadAcquisitionCB.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ThreadAcquisitionCB.cpp$(DependSuffix) -MM ThreadAcquisitionCB.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/ir2/anb/Documents/Mini-project_Decembre_SNIR2/The_program/Mini_projet_restauration/restauration/ThreadAcquisitionCB.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ThreadAcquisitionCB.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ThreadAcquisitionCB.cpp$(PreprocessSuffix): ThreadAcquisitionCB.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ThreadAcquisitionCB.cpp$(PreprocessSuffix) ThreadAcquisitionCB.cpp

$(IntermediateDirectory)/CommunicationThread.cpp$(ObjectSuffix): CommunicationThread.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/CommunicationThread.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/CommunicationThread.cpp$(DependSuffix) -MM CommunicationThread.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/ir2/anb/Documents/Mini-project_Decembre_SNIR2/The_program/Mini_projet_restauration/restauration/CommunicationThread.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CommunicationThread.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/CommunicationThread.cpp$(PreprocessSuffix): CommunicationThread.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/CommunicationThread.cpp$(PreprocessSuffix) CommunicationThread.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


