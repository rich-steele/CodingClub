# CodingClub

#### Set up your project

Go to https://github.com/Richard-Steele-Bluefruit/CodingClub

Top right, click on Fork

then accept or whatever...

Then you should be taken to the url of: `https://github.com/<YOUR_NAME>/CodingClub`

This is the github page for your copy of my repository. They are not connected, although they can be and we'll do that in a bit.

click green button "Code" in the middle, and copy the grey box text (click the two squares symbol to copy automatically)

Now it's all set up on github, have to set up on your computer next.

---

go to wherever you want this project to be in your file explorer. Doesn't matter where, mine's in Documents

right click, git bash here, then type `git clone ` and right click and paste the thing you copied before. It should look like:
```git clone https://github.com/<YOUR_NAME>/CodingClub.git```

hit return and wait. This copies down everything from github

Next move the bash window into the folder with:
```cd CodingClub```

---

Next add me as a remote! That's just someone else's repo you are keeping an eye on via github

First notice how you have no remotes currently. Type:
`git remote` and it will just have origin in there (that's what it always calls your repo)

add me:
```git remote add blessed https://github.com/Richard-Steele-Bluefruit/CodingClub.git```

then:
`git remote` will show blessed as well. Blessed is traditionally the name of the repo that you fork from. Often not owned by any dev in particular, but the organisation.
> A blessed, or canonical, repository is one which has the approval of the managers of the project. The blessed repository is supposed to be the de facto standard where all other clones are made from. If there is one place where code should be correct, it is the blessed repository.

You can even add each other if you like, though you will have to track down the address of each others fork. It will look like the one for mine but with the other persons name instead. You then type git remote add <nickname or alias> <fork address>. So for me to add Perry would mean I would type something like:
```git remote add pezzer https://github.com/Perry-PerrysSecondName-Bluefruit/CodingClub.git```

And double check it with `git remote`

Almost done

Lastly we are default on master branch. This is bad! Don't be in master branch for long. Master is your important branch! Not a working branch! It is the single source of truth in your repo that should be consistent with everyone elses master branch. A team working well together will all have an equivalent master branch to each other and blessed, and have their work-in-progresses all branched from that same place.

You can see your branches by typing `git branch`, it should just say master or main actually now as master isn't politically correct as of this year. You will keep seeing me mix it up though sorry. And talking to other devs about master is fine. Everyone knows what it means. You bigot.

Type this to create and move to one alongside it that's safe to muck around in:
`git checkout -b WorkingBranch`			(-b means do a new branch, WorkingBranch is a name I made up, make your own up if you want

And check by typing `git branch` again. You'll see both main/master and the new WorkingBranch there. The one you are sat in currently will be highlighted.

Done!!!

### Visual studios

I've checked on the magic sheet and you've all got the 2015 version so I have set up a project in that. It shouuuld just open in that if you double click the CodingClub.sln file, but if not then right click it, open with, and choose Microsoft Visual Studio Version Selector. That will open it for you. You'll see some stuff. Things to get started with are:
+ Right hand side - Solution explorer
    - There are two projects in there:
        + CodingCLub - we write functions in here. In Source files -> MathsLibrary.cpp to begin with
        + CodingClubTests - the unit tests! In Source files -> MathsLibraryTests.cpp to begin with
    - Top menu bar bit, click on 'Test -> Windows -> Test Explorer' and a new Test Explorer window appears on the left, this is where we navigate unit tests

Ctrl + Shift + B will build the code, and some tests should appear in that test explorer window, click Run All and they should turn green.

Process is to write code in Coding club project, tests in the tests project, build, and check the tests pass.

The challenge for this is to fill out that MathsLibrary file with mathsy functions: Divide, square, to start with, then some more complicated stuff maybe, and have it all match up to unit tests.

We'll do string stuff too.

Actually I'll write a quick one now.

Done. Only one test though, but it's a jumping off point!

### Nicer git environment

Viewing git as a tree is the best way, it makes branches and merges make sense visually. There are a bunch of tools to do this. I've used GitGUI, GitKraken, tortoiseGit and more, and they all pretty much do the same thing. The one I prefer though, and would recommend, is in VS Code, go to left hand side bar 'extensions' looks like 4 squares, go a search for 'Git Graph', and install that.

Now in VS code after you go to the top tool bar -> File -> Open Folder and choose the Coding club folder, an extra option will appear! If you go to the left hand side bar and click on 'source control' (three small circles with a couple of connecting lines), there are five icons along the top bar marked SOURCE CONTROL. The one that looks like 3 vertical lines with three dots on is 'View Git Graph'. Clicking that will show the git tree representation. The other useful control here is the 'Show Remote Branches' tick box at the top in the middle, which will toggle whether to show the remote repos as well, or just your own stuff.

Working in this view is highly recommended. Even when doing my work in a different IDE (Integrated development environment) like Visual studio 2015 which is where this project will be mostly based, I still keep a VS Code window open with Git Graph because it's pretty. Also if you go to the top menu bar and click Terminal -> New Terminal then you even get a nice bash window below to type in any git commands.


### Updating with stuff I've added

This gets any changes that any of your remotes has made. The purpose here is to fetch any changes that I (blessed) have pushed, like a new challenge
`git fetch --all`

We briefly enter main branch to update it, remember always keep main up to date, and branch off from that point!
`git checkout main`

This merges in MY (blessed) main branch. Now yours is upto date
`git merge blessed/main`

Now, so you don't accidentally start working in main, get out of it! Either by checking out a new branch from this point with
`git checkout -b <some new branch name>`

Or, bring a previous branch you are working on up to date
`git checkout WorkingBranch`
`git merge main`

Now you are good to go. Assuming there are no merge conflicts. This is where a change that you have made in your work-in-progress (WIP) branch conflicts with a change that has been made by blessed to main. If so it will bring up the conflicting lines, and ask you to choose which one to keep. Be careful! This is where you can, and we all have at some point, lost work. On your WIP branch, commit early, commit often, and it will be fine.







