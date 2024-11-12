
            FROM osrf/ros:rolling-desktop
            RUN apt-get update && apt-get upgrade -y
            RUN apt-get install -y bash-completion git git-lfs iputils-ping nano openssh-client python3-colcon-common-extensions python3-pip python3-vcstool sudo tmux trash-cli tree vim wget

RUN python_version=$(python3 -c "import sys; print(f'{sys.version_info.major}.{sys.version_info.minor}')")                     && echo "Python version is $python_version"                     && externally_managed_file_path="/usr/lib/python${python_version}/EXTERNALLY-MANAGED"                     && if [ -f "$externally_managed_file_path" ]; then mv "$externally_managed_file_path" "$externally_managed_file_path.old"; fi
RUN pip3 install -U -I pre-commit
            RUN git clone -b master https://github.com/StoglRobotics/ros_team_workspace.git /home/ravik/ros_team_workspace
            RUN cd /home/ravik/ros_team_workspace/rtwcli && pip3 install -r requirements.txt && cd -
            # workspace will be mounted as volume
            # upstream workspace will be mounted as volume
            RUN rm -rf /var/lib/apt/lists/*
