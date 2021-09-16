# GitHub Workshop

## Purpose

In this workshop, you will put into practice what you've learnt in the "[Using git and GitHub](https://github.com/Hyp-ed/hyped-2022/wiki/Using-git-and-GitHub)" guide.
If you are unable to attend the workshop, please try and complete it before onboarding starts as this will be very helpful when you start working with your team.

We will be available during the workshop time to help you if you have any problems related to the guide examples and the workshop exercises.
If you have any other questions but are not able to ask during the workshop, don't hesitate to message us on Slack!

## Workshop Requirements

- git installed on your laptop
- signed up to GitHub
- filled in the GitHub details form (if you don't where to find this, message us on Discord)
- gone through the "[Using git and GitHub](https://github.com/Hyp-ed/hyped-2022/wiki/Using-git-and-GitHub)" guide

## Workshop Exercises

### Exercise 1

- Clone this repository
- Enter this workshop's folder (`01-git`)
- Create a new branch from `master` and call it `workshop-<your name>`
- Change to the branch created above
- Create a file `about-<your name>.txt` and write three fun facts about yourself
- Once you are satisfied with what you have written, commite the changes and push them to your branch
    - *Remember to write a meaningful commit message!*
- Create a pull request
- If there are any other open pull requests waiting to be merged, pick one of them and review it
- Wait until your PR gets merged

### Exercise 2

- From your local branch `workshop-<your name>`, create a new branch called `attendance-<your name>`
- Create or edit the file `attendance.txt` by adding your name to it
- Again, push your changes to the remote and open a PR
- You are likely encounter *merge conflicts*
- To resolve them, go back to your terminal, pull the newest changes from the `master` branch and merge them into `about-<your name>`
- In `attendance.txt`, you will find conflict markers `<<<<<<<`, `=======` and `>>>>>>>`
- You should delete them and edit the rest so that both your names as well as those that were already there are present
- Once you're done, commit your changes and push again
- Unless someone else was faster than you, the PR should be ready to be merged now