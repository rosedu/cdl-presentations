def user_profile(request, id):
    """ Shows user's specified by id profile """
    profile = UserProfile.objects.get(user=User.objects.get(id=id))
    try:
        can_challenge = request.user.get_profile().can_challenge(profile)
    except AttributeError:
        can_challenge = False
    
    return render_to_response('user/profile.html', 
            {'profile': profile, 'can_challenge': can_challenge}, 
            context_instance=RequestContext(request))
