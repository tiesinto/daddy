static const int givecom  = 1; /* 1 enables compliments */
static const int giveenc  = 1; /* 1 enables encouragement */

static const char color[] = "#d22d72"; /* default output color */
static const char ending[] = "~\n";    /* default ending for responses */

/* your nicknames */
static const char *sweetie[] = { "boy", "sweetheart" };

/* denigrating terms */
static const char *disparagement[] = { "slut", "pervert" };

/* caregivers' names, 'gift' and pronouns */
static const Caregiver caregivers[] = {
	/* name      gift     they    them    their   theirs   themself */
	{ "daddy",   "cum",   "he",   "him",  "his",  "his",   "himself" },
	{ "dada",    "cum",   "he",   "him",  "his",  "his",   "himself" },
	/*{ "mommy",   "milk",  "she",  "her",  "her",  "hers",  "herself" },*/
};

/*
 * compliments and encouragements
 *
 * available placeholders: {sweetie} {caregiver} {disparagement} {gift}
 *                         {they} {them} {their} {theirs} {themself}
 *
 * bundled responses come from fwdekker/mommy, natawie/mommy-rs,
 * Gankra/cargo-mommy and sudofox/shell-mommy with alterations by me
 */
static const char *compliments[] = {
	/* mommy */

	/* generic */
	"*pets your head*",
	"amazing work as always",
	/* good X */
	"good {sweetie}",
	"that's a good {sweetie}",
	"who's my good {sweetie}",
	/* proud */
	"{caregiver} is very proud of you",
	"{caregiver} is so proud of you",
	"{caregiver} knew you could do it",
	"{caregiver} loves you, you are doing amazing",
	/* compliment */
	"{caregiver}'s {sweetie} is so smart",
	/* reward */
	"{caregiver} thinks you deserve a special treat for that",
	"my little {sweetie} deserves a big fat kiss for that",

	/* mommy-rs */

	/* generic */
	"{caregiver} is so proud of {their} little {sweetie}",
	"good job my little {sweetie}",
	"you're doing great, {sweetie}",
	"{caregiver} thinks {their} little {sweetie} is doing a great job",
	"who's {caregiver}'s little {sweetie}",

	/* cargo-mommy */

	/* generic */
	"*pets your head*",
	"*gives you scritches*",
	"you're such a smart cookie",
	"that's a good {sweetie}",
	"{caregiver} thinks {their} little {sweetie} earned a big hug",
	"good {sweetie}~\n{caregiver}'s so proud of you",
	"aww, what a good {sweetie}~\n{caregiver} knew you could do it",
	"you did it!",
	"{caregiver} loves you",
	"*gives you a sticker*",
	"*boops your nose*",
	"*wraps you in a big hug*",
	"well done~!\n{caregiver} is so happy for you",
	"what a good {sweetie} you are",
	"that's {caregiver}'s clever little {sweetie}",
	"you're doing so well!",
	"you're making {caregiver} so happy",
	"{caregiver} loves {their} cute little {sweetie}",
	/* thirsty */
	"*tugs your leash*\nthat's a VERY good {sweetie}",
	"*runs {their} fingers through your hair* good {sweetie}~ keep going",
	"*smooches your forehead*\ngood job",
	"*nibbles on your ear*\nthat's right~\nkeep going",
	"*pats your butt*\nthat's a good {sweetie}",
	"*drags {their} nail along your cheek*\nsuch a good {sweetie}",
	"*bites {their} lip*\nmhmm",
	"give {caregiver} a kiss",
	"*heavy breathing against your neck*",
	/* yikes */
	"keep it up and {caregiver} might let you cum you little {disparagement}",
	"good {disparagement}~\nyou've earned five minutes with the buzzy wand",
	"mmm~ come taste {caregiver}'s {gift}",
	"*slides {their} finger in your mouth*\nthat's a good little {disparagement}",
	"you're so good with your fingers~\n{caregiver} knows where {their} {disparagement} should put them next",
	"{caregiver} is getting hot",
	"that's a good {disparagement}",
	"yes~\nyes~~\nyes~~",
	"{caregiver}'s going to keep {their} good little {disparagement}",
	"open wide {disparagement}.\nyou've earned {caregiver}'s {gift}",
	"do you want {caregiver}'s {gift}?\nkeep this up and you'll earn it",
	"oooh~ what a good {disparagement} you are",

	/* shell-mommy */

	/* generic */
	"*pets your head*",
	"awe, what a good {sweetie}~\n{caregiver} knew you could do it",
	"good {sweetie}~\n{caregiver}'s so proud of you",
	"keep up the good work, my love",
	"{caregiver} is proud of the progress you've made",
	"{caregiver} is so grateful to have you as {their} little {sweetie}",
	"i'm so proud of you, my love",
	"{caregiver} is so proud of you",
	"{caregiver} loves seeing {their} little {sweetie} succeed",
	"{caregiver} thinks {their} little {sweetie} earned a big hug",
	"that's a good {sweetie}",
	"you did an amazing job, my dear",
	"you're such a smart cookie"
};

static const char *encouragements[] = {
	/* mommy */

	/* trust */
	"{caregiver} believes in you",
	"{caregiver} knows you'll get there",
	"{caregiver} knows {their} little {sweetie} can do better",
	"just know that {caregiver} still loves you",
	/* consolation */
	"don't worry, it'll be alright",
	"it's okay to make mistakes",
	"{caregiver} knows it's hard, but it will be okay",
	/* fallback */
	"{caregiver} is always here for you",
	"{caregiver} is always here for you if you need {them}",
	"come here, sit on my lap while we figure this out together",
	/* encouragement */
	"never give up, my love",
	"just a little further, {caregiver} knows you can do it",
	"{caregiver} knows you'll get there, don't worry about it",
	/* clean up */
	"did {caregiver}'s {sweetie} make a big mess",

	/* mommy-rs */

	/* generic */
	"don't be so hard on yourself my little {sweetie}",
	"it's okay my little {sweetie}, {caregiver} still loves you",
	"{caregiver}'s sure {their} little {sweetie} will get it next time",
	"don't worry, {caregiver} still loves you no matter what",
	"even {caregiver} makes mistakes sometimes",

	/* cargo-mommy */

	/* generic */
	"{caregiver} believes in you",
	"don't forget to hydrate",
	"aww, you'll get it next time",
	"do you need {caregiver}'s help?",
	"everything's gonna be ok",
	"{caregiver} still loves you no matter what",
	"oh no did {caregiver}'s little {sweetie} make a big mess?",
	"{caregiver} knows {their} little {sweetie} can do better",
	"{caregiver} still loves you",
	"{caregiver} thinks {their} little {sweetie} is getting close",
	"it's ok, {caregiver}'s here for you",
	"oh, darling, you're almost there",
	"does {caregiver}'s little {sweetie} need a bit of a break?",
	"oops~! {caregiver} loves you anyways",
	"try again for {caregiver}, {sweetie}",
	"don't worry, {caregiver} knows you can do it",
	/* thirsty */
	"you're so cute when you're flustered",
	"do you think you're going to get a reward from {caregiver} like that?",
	"*grabs your hair and pulls your head back*\nyou can do better than that for {caregiver} can't you?",
	"if you don't learn how to code better, {caregiver} is going to put you in time-out",
	"does {caregiver} need to give {their} little {sweetie} some special lessons?",
	"you need to work harder to please {caregiver}",
	"gosh you must be flustered",
	"are you just keysmashing now~?\ncute",
	"is {caregiver}'s little {sweetie} having trouble reaching the keyboard?",
	/* yikes */
	"you filthy {disparagement}~\nyou made a mess, now clean it up~\nwith your tongue",
	"*picks you up by the throat*\npathetic",
	"*drags {their} claws down your back*\ndo it again",
	"*brandishes {their} paddle*\ndon't make me use this",
	"get on your knees and beg {caregiver} for forgiveness you {disparagement}",
	"{caregiver} doesn't think {their} little {disparagement} should have permission to wear clothes anymore",
	"never forget you belong to {caregiver}",
	"does {caregiver} need to put you in the whore wiggler?",
	"{caregiver} is starting to wonder if you should just give up and become {their} breeding stock",
	"on your knees {disparagement}",
	"oh dear. {caregiver} is not pleased",
	"one spank per error sounds appropriate, don't you think {disparagement}?",
	"no more {gift} for you {disparagement}",

	/* shell-mommy */

	/* generic */
	"do you need {caregiver}'s help?",
	"don't give up, my love",
	"don't worry, {caregiver} is here to help you",
	"i believe in you, my sweet {sweetie}",
	"it's okay to make mistakes, my dear",
	"just a little further, sweetie",
	"let's try again together, okay?",
	"{caregiver} believes in you, and knows you can overcome this",
	"{caregiver} believes in you",
	"{caregiver} is always here for you, no matter what",
	"{caregiver} is here to help you through it",
	"{caregiver} is proud of you for trying, no matter what the outcome",
	"{caregiver} knows it's tough, but you can do it",
	"{caregiver} knows {their} little {sweetie} can do better",
	"{caregiver} knows you can do it, even if it's tough",
	"{caregiver} knows you're feeling down, but you'll get through it",
	"{caregiver} knows you're trying your best",
	"{caregiver} loves you, and is here to support you",
	"{caregiver} still loves you no matter what",
	"you're doing your best, and that's all that matters to {caregiver}",
	"{caregiver} is always here to encourage you"
};
