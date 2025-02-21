# Complete Git Setup and Usage Guide

## Table of Contents
1. [Git Installation and SSH Setup](#git-installation-and-ssh-setup)
   - [Installing Git on Linux](#1-installing-git-on-linux)
   - [Installing Git on Windows](#2-installing-git-on-windows)
   - [Installing Git on Mac](#3-installing-git-on-mac)
2. [Initial Git Configuration](#initial-git-configuration)
3. [SSH Key Setup](#ssh-key-setup)
4. [Adding SSH Key to GitHub](#adding-ssh-key-to-github)
5. [What is Cloning in Git?](#what-is-cloning-in-git)
   - [How to Clone a Git Repository](#how-to-clone-a-git-repository)

---

# Git Installation and SSH Setup Guide

## Installing Git on Different Operating Systems

### 1. Installing Git on Linux

For Debian-based systems (Ubuntu):
```bash
sudo apt update
sudo apt install git
```

For Red Hat-based systems (Fedora/CentOS):
```bash
sudo dnf install git
```

Verify installation on Linux:
```bash
git --version
```

### 2. Installing Git on Windows

1. Download Git for Windows from [git-scm.com/download/win](https://git-scm.com/download/win)
2. Run the installer (default options are recommended)
3. Verify installation in Git Bash:
```bash
git --version
```

### 3. Installing Git on Mac

Using Homebrew:
```bash
brew install git
git --version
```

## Initial Git Configuration

Set up your Git identity:
```bash
git config --global user.name "Your Name"
git config --global user.email "your.email@example.com"
```

Verify your configuration:
```bash
cat ~/.gitconfig
```

Expected output:
```bash
[user]
  name = YourUsername
  email = your.email@example.com
```

## SSH Key Setup

1. Generate SSH key:
```bash
ssh-keygen -o
```

2. View your private key (keep this secure):
```bash
cat ~/.ssh/id_ed25519
```

Example private key format:
```bash
-----BEGIN OPENSSH PRIVATE KEY-----
[Your private key content will appear here]
-----END OPENSSH PRIVATE KEY-----
```

3. View your public key:
```bash
cat ~/.ssh/id_ed25519.pub
```

Example public key format:
```bash
ssh-ed25519 AAAAC3NzaC1lZDI1NTE5AAAA[...]example japneetsingh@computer.local
```

## Adding SSH Key to GitHub

1. Copy your public key (the output from `cat ~/.ssh/id_ed25519.pub`)
2. Go to GitHub Settings
3. Navigate to "SSH and GPG keys"
4. Click "New SSH key"
5. Give your key a title
6. Paste your public key
7. Click "Add SSH key"

You're now ready to use Git with GitHub securely via SSH!

# What is Cloning in Git?

Cloning in Git means creating a copy of a remote repository (such as on GitHub) to your local machine. This allows you to work with the repository's files and history locally. When you clone a repository, you get all of the files, branches, and commit history from the remote repository.

## How to Clone a Git Repository:

1. **Cloning a repository**:
   You use the `git clone` command followed by the URL of the repository you want to clone. Here's how you do it:

   ```bash
   git clone <repository-url>
   ```

For example:
```bash 
git clone git@github.com:openai/SWELancer-Benchmark.git
```

This command will:
- Clone the SWELancer-Benchmark repository from GitHub to your current directory.
- Create a new directory named SWELancer-Benchmark where the repository's files will be stored.

After running the clone command: When you run the git clone command, Git connects to the remote repository (in this case, GitHub), fetches all the data (files, history, etc.), and sets up the connection for you to push or pull changes to/from that repository.

Dealing with the authenticity prompt: When you connect to GitHub for the first time, you'll see a message like this:
```bash
The authenticity of host 'github.com (140.82.114.4)' can't be established.
Are you sure you want to continue connecting (yes/no/[fingerprint])?
```
Type yes to confirm, and Git will add GitHub's host to your list of known hosts for future connections.

After cloning: You will be able to navigate into the cloned repository folder using the cd command:
```bash
cd SWELancer-Benchmark
```

Inside this directory, you can use ls to list the files and see the repository's contents:
```bash
ls
```

Viewing files: You can view files in the repository by running commands like cat, for example, to see the content of the README.md file:
```bash
cat README.md
```

Summary of Commands in Your Example:

```bash
# Clone the repository
git clone git@github.com:openai/SWELancer-Benchmark.git

# Change directory into the cloned repo
cd SWELancer-Benchmark

# List files in the directory
ls

# View the content of the README.md file
cat README.md
```





# Git Log Command Guide

## Overview
The `git log` command is used to display the commit history of a Git repository. It shows the logs of all commits in the current branch, starting from the most recent commit.

## Basic Usage

To view commit history:
```bash
git log
```

This displays:
- The **commit hash** (unique identifier for each commit)
- The **author** of the commit
- The **date and time** of the commit
- The **commit message** describing the changes

### Example Output
```bash
commit 3d2c9bdfd7b8b5981f1a5a4db7a0f6c238b28b2c (HEAD -> main)
Author: John Doe <john.doe@example.com>
Date: Fri Feb 20 14:53:37 2025 -0500

    Added new feature to the project

commit 9b2d4a1c04a63f39e4f244d930078be3d7a3abf7
Author: Jane Smith <jane.smith@example.com>
Date: Fri Feb 19 10:21:55 2025 -0500

    Fixed bug in login feature
```

## Common Options

### 1. Limit Number of Commits
Show only the last 5 commits:
```bash
git log -n 5
```

### 2. One-Line Format
Display each commit on a single line:
```bash
git log --oneline
```

### 3. Show Changes in Commits
Display the actual code changes (diffs) for each commit:
```bash
git log -p
```

### 4. Filter by Author
Show commits by a specific author:
```bash
git log --author="John Doe"
```

### 5. Filter by Date Range
Show commits within a specific time period:
```bash
git log --since="2025-02-01" --until="2025-02-20"
```

### 6. Graphical Format
Display a graphical representation of commit history with branch information:
```bash
git log --graph --oneline --all
```

## Tips
- Use `q` to exit the log view when in terminal
- Combine options for more specific outputs (e.g., `git log --oneline --author="John" -n 5`)
- The most recent commits appear first in the log
- The commit hash can be used to reference specific commits in other Git commands